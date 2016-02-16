#ifndef __DESIGNPATTERNS__WHIP_H__
#define __DESIGNPATTERNS__WHIP_H__
#include "CondimentDecorator.h"
#include <string>
class Whip : public CondimentDecorator {
public:
	Whip(const Beverage& beverage);
	std::string description() const;
	double cost() const;
};
#endif
