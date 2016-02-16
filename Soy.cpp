#include "Soy.h"
Soy::Soy(const Beverage& beverage) : CondimentDecorator("Soy", beverage) {}

std::string Soy::description() const {
	return "Soy, " + beverage().description();
}
double Soy::cost() const {
	return 0.15 + beverage().cost();
}
