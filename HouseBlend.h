#ifndef __DESIGNPATTERNS__HOUSEBLEND_H__
#define __DESIGNPATTERNS__HOUSEBLEND_H__
#include "Beverage.h"
#include <string>
class HouseBlend : public Beverage {
public:
	HouseBlend();
	double cost() const;
private:
    
};
#endif
