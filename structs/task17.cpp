//Оголоси структуру Segment з двома точками (початок і кінець). Зчитай координати та обчисли довжину відрізка.
#include <iostream>
#include <cmath>
struct Point{
    int x;
    int y;
};
struct Segment{
    struct Point start;
    struct Point end;
};
int main(){
    struct Segment seg;

    std::cout<<"Start point: ";
    std::cout<<"Enter x: ";
    std::cin>> seg.start.x;
    std::cout<<"Enter y: ";
    std::cin>> seg.start.y;


    std::cout<<"End point: ";
    std::cout<<"Enter x: ";
    std::cin>> seg.end.x;
    std::cout<<"Enter y: ";
    std::cin>> seg.end.y;

    int dif1 = seg.end.x-seg.start.x;
    int pow1 = pow(dif1, 2);

    int dif2 = seg.end.y-seg.start.y;
    int pow2 = pow(dif2, 2);

    int res = pow1+pow2;
    double result = sqrt(res);

    std::cout<<"----------------------------------"<<std::endl;
    std::cout<< "Result: "<< result<<std::endl;
    return 0;



}
