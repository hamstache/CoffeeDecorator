
#ifndef __DESIGNPATTERNS_BEVERAGE_H__
#define __DESIGNPATTERNS_BEVERAGE_H__
#include <iostream>
#include <string>
class Beverage{
    
public:
	Beverage(std::string description); // no default constructor
	virtual std::string description() const; // virtual
	double virtual cost() const = 0; // pure virtual → Beverage is abstract
	friend std::ostream& operator<<(std::ostream& os, Beverage const& bev);
private:
	std::string _description; // stores name of all Beverages, UNLIKE our Shape classes
};
#endif