#include "I2CDuino.h"

/**
 * @brief Creates the I2C connections to the Arduino.
 */
I2CDuino::I2CDuino(UINT8 address):
	m_i2c(NULL),
	m_address(address)
{
	DigitalModule *module = DigitalModule::GetInstance(slot);
	m_i2c = module->GetI2C(kAddress);

}

/**
 * @brief Destroys the Arduino connection instance.
 */
I2CDuino::~I2CDuino()
{

}
