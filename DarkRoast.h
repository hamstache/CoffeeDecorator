#ifndef __DESIGNPATTERNS__DARKROAST_H__
#define __DESIGNPATTERNS__DARKROAST_H__
#include "Beverage.h"
class DarkRoast : public Beverage {

public:
	DarkRoast(); // default constructor
	double cost() const;
};
#endif