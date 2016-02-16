
#include "Whip.h"
Whip::Whip(const Beverage& beverage) : CondimentDecorator("Whip", beverage) { }

std::string Whip::description() const {
	return "Whip, " + beverage().description();
}
double Whip::cost() const {
	return 0.10 + beverage().cost();
}
