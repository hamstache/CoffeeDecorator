
#include "Mocha.h"
Mocha::Mocha(const Beverage& beverage) : CondimentDecorator("Mocha",beverage) {}

std::string Mocha::description() const {
	return "Mocha, " + beverage().description();
}
double Mocha::cost() const {
	return 0.20 + beverage().cost();
}
