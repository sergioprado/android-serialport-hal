package vendor.labworks.serialport;

@VintfStability
interface ISerialPort {
    void tx(byte data);
    byte rx();
}
