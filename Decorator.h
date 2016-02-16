#ifndef __DESIGNPATTERNS__CONDIMENTDECORATOR_H__
#define __DESIGNPATTERNS__CONDIMENTDECORATOR_H__
#include "Beverage.h"

class CondimentDecorator : public Beverage {
public:
	CondimentDecorator::CondimentDecorator(std::string const& description, Beverage const& beverage);
	Beverage const& beverage() const;
    
	virtual std::string description() const = 0;
	virtual double cost() const = 0;
private:
	Beverage const& _beverage;
};
#endif