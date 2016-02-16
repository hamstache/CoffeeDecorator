#include "Beverage.h"

Beverage::Beverage(std::string description) : _description(description) {}
std::string Beverage::description() const { return _description; }
std::ostream& operator<<(std::ostream& os, Beverage const& bev) {
	return os << bev.description() << "$=" << bev.cost() << std::endl;
}