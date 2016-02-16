#ifndef __DESIGNPATTERNS__MILK_H__
#define __DESIGNPATTERNS__MILK_H__
#include "CondimentDecorator.h"
#include <string>
class Milk : public CondimentDecorator {
public:
	Milk(const Beverage& beverage);
	std::string description() const;
	double cost() const;
};
#endif