#include "Milk.h"
Milk::Milk(const Beverage& beverage) : CondimentDecorator("Milk", beverage) {}

std::string Milk::description() const {
	return "Milk, " + beverage().description();
}
double Milk::cost() const {
	return 0.10 + beverage().cost();
}
