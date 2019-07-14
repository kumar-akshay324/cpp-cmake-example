#include "computations.h"

namespace computation {

/* If fah is TRUE, then input is converted from celsius to fahrenheit
  else	if fah is FALSE then input is converted from fahrenheit to celsius
*/
double Computations::convTemp(double input, bool fah) {
	if (fah) {
		return (1.8 * input + 32 ); // Celsius to Fahrenheit
	} else {
		return (input - 32) / 1.8; // Fahrenheit to Celsius
	}
}

/* If miles is TRUE, then input is converted from kilometers to miles
  else	if miles is FALSE then input is converted from miles to kilometers
*/
double Computations::convDistance(double input, bool miles) { 
	if (miles) {
		return (input / 1.60934); // Kilometers to Miles 
	} else {
		return (1.60934 * input); // Miles to Kilometers 
	}
}

/* If deg is TRUE, then input is converted from radians to degrees
  else	if deg is FALSE then input is converted from degrees to radians
*/
double Computations::convAngle(double input, bool deg) {
	if (deg) {
		return (input * 180)/ M_PI; // Radians to Degrees
	} else {
		return (input * M_PI) / 180; // Degrees to Radians
	}
}

} // namespace computation


