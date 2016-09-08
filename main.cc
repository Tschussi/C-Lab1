/* Kevin Hames
 * Ece 2620 
 * Lab 1: finding the radius, circumferance and area of a circle given two points */

#include <iostream>
#include <cmath>  
#define PI (4*(atan(1)))

// Functions for calculating radius, circumference and area of a circle
double distance(double p1x, double p1y, double p2x, double p2y ) {
	return sqrt(pow(p1x - p2x,2) + pow(p1y - p2y,2));
}
double radius(double p1x, double p1y, double p2x, double p2y) {
 return distance(p1x,p1y,p2x,p2y);
}
double circumference(double r) {
	return 2*PI*r;
}
double area(double r) {
	return PI * pow(r,2);
}
int main()
{
	// declaring variables 
	double x = 0.0;
	double y = 0.0;
	double x1 = 0.0;
	double y1 = 0.0;
	double rad = 0.0;
	int menu = 0;
	// assigning variables to the cordinates for a circle
	std::cout << "Please enter the cordinates of the circle's center (x followed by y)" << std::endl;
	std::cin >> x;
	std::cin >> y;
	std::cout << "Please enter the cordinates of a point on the circle (x followed by y)" << std::endl;
	std::cin >> x1;
	std::cin >> y1;
	// menu option, allowing a user to select which function to call and calculates values of a user defined circle
	rad = radius(x,y,x1,y1);
    std:: cout << "(1) Compute Radius" << std::endl << "(2) Compute Circumference" << std::endl << "(3) Compute Area" << std::endl << "(4) Exit" << std::endl;
	while(menu != 4) {
	std::cin >> menu;
	switch (menu) {
		case 1 :
			std::cout << "The Radius is " << rad << std::endl;
			break;
		case 2 :
			std::cout << "The Circumference is " << circumference(rad) << std::endl;
			break;
		case 3 :
			std::cout << "The Area is " << area(rad) << std::endl;
			break;
		case 4:
			break;
		default:
			std::cout << "Invalid option " << std::endl;
	}
	}		
	return 0;
}

