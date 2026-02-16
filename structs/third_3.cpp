#include <iostream>
#include <cmath>

struct Point{
	int x;
	int y;
	
};

int main(){
struct Point point;

std::cout<<"Enter x: ";
std::cin>> point.x;

std::cout<<"Enter y: ";
std::cin>> point.y;

double sumOfpow = pow(point.x, 2)+pow(point.y, 2);
double distance = sqrt(sumOfpow);

std::cout<<"\nDistance from origin: "<< distance <<std::endl;


	

return 0;
}
