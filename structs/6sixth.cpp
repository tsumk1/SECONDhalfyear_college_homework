//Зчитай координати двох точок та обчисли відстань між ними.
#include <iostream>
#include <cmath>

struct Points{
    int x1;
    int y1;
    int x2;
    int y2;
};

int main(){
struct Points point;
    std::cout<<"Enter x1: ";
    std::cin>> point.x1;
    std::cout<<"Enter y1: ";
    std::cin>> point.y1;

    std::cout<<"Enter x2: ";
    std::cin>> point.x2;
    std::cout<<"Enter y2: ";
    std::cin>> point.y2;

    int dif1 = point.x2-point.x1;
    int pow1 = pow(dif1, 2);

    int dif2 = point.y2-point.y1;
    int pow2 = pow(dif2, 2);

    int res = pow1+pow2;
    double result = sqrt(res);

    std::cout<<"----------------------------------"<<std::endl;
    std::cout<< "Result: "<< result<<std::endl;
    return 0;

}

