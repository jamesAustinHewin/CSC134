#ifndef TEMPERATURE_H_INCLUDED
#define TEMPERATURE_H_INCLUDED

/** Conversion factor for Kelvin temperatures */
#define TEMP_CONV_FACTOR 273.15

/**
 * tempKToC
 * Converts Kelvin temperature to Celsius temperature
 *
 * @param kelvin          Kelvin temperature
 * @return                Celsius temperature
 */
double tempKToC(double kelvin);

/**
 * tempCToK
 * Converts Celsius temperature to Kelvin temperature
 *
 * @param celsius         Celsius temperature
 * @return                Kelvin temperature
 */
double tempCToK(double celsius);

/**
 * tempFToC
 * Converts Fahrenheit temperature to Celsius temperature
 *
 * @param fahrenheit      Fahrenheit temperature
 * @return                Celsius temperature
 */
double tempFToC(double fahrenheit);

/**
 * tempCToF
 * Converts Celsius temperature to Fahrenheit temperature
 *
 * @param celsius         Celsius temperature
 * @return                Fahrenheit temperature
 */
double tempCToF(double celsius);

/**
 * tempUI
 * Displays menu for temperature conversions
 */
void tempUI(void);
#endif // TEMPERATURE_H_INCLUDED
