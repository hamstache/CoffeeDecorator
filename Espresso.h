#ifndef __DESIGNPATTERNS__ESPRESSO_H__
#define __DESIGNPATTERNS__ESPRESSO_H__
#include "Beverage.h"
class Espresso : public Beverage {
public:
	Espresso(); // default constructor
	double cost() const;
private:
	// nothing here!
};
#endif