#include "SerialPort.h"

#include <android-base/logging.h>
#include <android/binder_manager.h>
#include <android/binder_process.h>

using ::aidl::vendor::labworks::serialport::SerialPort;

int main() {
    LOG(INFO) << "Starting HAL";

    ABinderProcess_setThreadPoolMaxThreadCount(16);

    std::shared_ptr<SerialPort> serialport = ndk::SharedRefBase::make<SerialPort>();

    const std::string instance = std::string() + SerialPort::descriptor + "/default";
    binder_status_t status = AServiceManager_addService(serialport->asBinder().get(), instance.c_str());
    CHECK_EQ(status, STATUS_OK);

    LOG(INFO) << "Successfully registered HAL";

    ABinderProcess_startThreadPool();
    ABinderProcess_joinThreadPool();

    return EXIT_FAILURE;  // should not reach here
}
