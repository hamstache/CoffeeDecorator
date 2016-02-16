#include "CondimentDecorator.h"

CondimentDecorator::CondimentDecorator(std::string const& description, Beverage const& beverage) 
: Beverage(description), _beverage(beverage) {}

Beverage const& CondimentDecorator::beverage() const { return _beverage; }