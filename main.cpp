

#include "CondimentDecorator.h"
#include "Beverage.h"
#include "Houseblend.h"
#include "Espresso.h"
#include "Soy.h"
#include "Milk.h"
#include "Mocha.h"
#include"DarkRoast.h"
#include "Decaf.h"
#include "Whip.h"

int main() {
	const Beverage& bev = Espresso();
	std::cout << bev.description() << " = $" << bev.cost() << std::endl;
	const Beverage& bev2 = DarkRoast();
	std::cout << bev2.description() << " = $" << bev2.cost() << std::endl;
	Soy s(bev2);
	std::cout << s << std::endl;
    
	Mocha t(s);;
	std::cout << t << std::endl;
    
	Whip u(t);
	std::cout << u << std::endl;
    
    
	std::cout << Whip(Mocha(Soy(Espresso()))) << std::endl;
}