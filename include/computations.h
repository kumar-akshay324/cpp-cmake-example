#include <iostream>
#include <cmath>
#include <memory>
#include <algorithm>
#include <vector>

#ifndef CPP_EXAMPLE_COMPUTATIONS_H_
#define CPP_EXAMPLE_COMPUTATIONS_H_

namespace computation {

class Computations {
  public:
  	Computations(void) = default;
  	~Computations(void) = default;

	double convTemp(double input, bool fah=true);

	double convDistance(double input, bool miles=true);
		
	double convAngle(double input, bool deg=true);
};
} // namespace computation

#endif // CPP_EXAMPLE_COMPUTATIONS_H_

