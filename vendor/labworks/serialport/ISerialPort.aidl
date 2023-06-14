package vendor.labworks.serialport;

interface ISerialPort {
    void tx(byte data);
    byte rx();
}
