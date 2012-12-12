#ifndef I2CDUINO_H
#define I2CDUINO_H

#include <WPILib.h>

class I2C;

/**
 * A class for interfacing with an Arduino over the I2C
 * communication protocol. This class can be used to send
 * any kind of data over the bus to the Arduino, as well 
 * as read in data that the Arduino sends back to the cRIO.
 *
 * This class will only work in an environment inside of a 
 * WindRiver C++ project for FRC, or in another environment
 * where the WPILib is present. It is designed for WR FRC.
 * 
 * @author Arthur Lockman
 */
class I2CDuino
{
private:
	I2C m_i2c;
	UINT8 m_address;

public:
	I2CDuino(UINT8 address);
	~I2CDuino();
};

#endif
