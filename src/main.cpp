#include <iostream> 
#include "computations.h"

int main(int argc, char **argv) {
	// Object of the Computations class
	std::unique_ptr<computation::Computations> comp = std::make_unique<computation::Computations>();
	
	// Using functions of the Computations class to perform operations	
	float temp = comp->convTemp(60); 
	std::cout << "60 degrees Celsius is " << temp << " degree Fahrenheit " << std::endl;

	float temp2 = comp->convTemp(temp, false); 
	std::cout <<  temp <<" degrees Fahrenheit is " << temp2 << " degree Celsius " << std::endl;	 

	float dist = comp->convDistance(5); 
	std::cout << "5 kilometers is " << dist << " miles " << std::endl;

	float dist2 = comp->convDistance(dist, false); 
	std::cout << dist << " miles is " << dist2 << " kilometers " << std::endl;

	float angle = comp->convAngle(3.5);
	std::cout << "3.5 radians is " << angle << " degrees " << std::endl;

	float angle2 = comp->convAngle(angle, false);
	std::cout << angle <<" degrees is " << angle2 << " radians " << std::endl;

	return 0;
}

