#ifndef __DESIGNPATTERNS__MOCHA_H__
#define __DESIGNPATTERNS__MOCHA_H__
#include "CondimentDecorator.h"
#include <string>
class Mocha : public CondimentDecorator {
public:
	Mocha(const Beverage& beverage);
	std::string description() const;
	double cost() const;
};
#endif
