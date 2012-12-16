#include "I2CDuino.h"

/**
 * @brief Creates the I2C connections to the Arduino.
 * @param slot The slot that the DigitalModule is in on the cRIO.
 * @param address The I2C address of the Arduino.
 */
I2CDuino::I2CDuino(UINT32 slot, UINT8 address):
	m_i2c(NULL),
	m_address(address)
{
	DigitalModule *module = DigitalModule::GetInstance(slot);
	m_i2c = module->GetI2C(m_address);
}

/**
 * @brief Destroys the Arduino connection instance.
 */
I2CDuino::~I2CDuino()
{
	delete m_i2c;
	m_i2c = NULL;
}

/**
 * @brief Reads in data from the Arduino.
 */
I2CDuino::Read()
{
	//m_i2c->read(something);
}

/**
 * @brief Writes data to the Arduino.
 */
I2CDuino::Write()
{
	//m_i2c->write(some data);
}