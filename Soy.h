#ifndef __DESIGNPATTERNS__SOY_H__
#define __DESIGNPATTERNS__SOY_H__
#include "CondimentDecorator.h"
#include <string>
class Soy : public CondimentDecorator {
public:
	Soy(const Beverage& beverage);
	std::string description() const;
	double cost() const;
};
#endif
