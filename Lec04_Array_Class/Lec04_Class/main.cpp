#include "Complex.h"
#include "Car.h"

int main()
{
//	Complex a, b, c;
//	a.read("A= ");
//	a.print("A = ");

	Car myCar;
	Car momsCar(10, "K5", 2);

	myCar.whereAmI();
	momsCar.whereAmI();
	myCar.changeGear(3);
	momsCar.speedUp();
	momsCar.display();

}