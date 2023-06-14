#pragma once

#include <aidl/vendor/labworks/serialport/BnSerialPort.h>

namespace aidl {
namespace vendor {
namespace labworks {
namespace serialport {

class SerialPort : public BnSerialPort {
    ndk::ScopedAStatus tx(int8_t  data) override;
    ndk::ScopedAStatus rx(int8_t* data) override;
};

} // namespace serialport
} // namespace labworks
} // namespace vendor
} // namespace aidl
