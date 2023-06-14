#include "SerialPort.h"

namespace aidl {
namespace vendor {
namespace labworks {
namespace serialport {

ndk::ScopedAStatus SerialPort::tx(int8_t data) {
    // TODO: write data to serial port (/dev/ttyS0)
    return ndk::ScopedAStatus::ok();
}

ndk::ScopedAStatus SerialPort::rx(int8_t* data) {
    // TODO: read serial port (/dev/ttyS0) and save to data
    return ndk::ScopedAStatus::ok();
}

} // namespace serialport
} // namespace labworks
} // namespace vendor
} // name space aidl
