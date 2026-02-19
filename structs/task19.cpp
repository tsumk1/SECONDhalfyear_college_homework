//Оголоси структуру Rectangle з двома точками (лівий нижній і правий верхній кути). Зчитай координати та обчисли площу.
#include <iostream>
#include <cmath>

struct Point{
    int x1;
    int y1;
    int x2;
    int y2;
};
struct Rectangle{
    struct Point point;
};
int main(){
    struct Rectangle rec;

    std::cout<<"Bottom-leftX: ";
    std::cin>>rec.point.x1;
    std::cout<<"Bottom-leftY: ";
    std::cin>>rec.point.y1;

    std::cout<<"Top-rightX: ";
    std::cin>> rec.point.x2;
    std::cout<<"Top-rightY: ";
    std::cin>> rec.point.y2;

    int dif1 = rec.point.x2-rec.point.x1;
    //int pow1 = pow(dif1, 2);

    int dif2 = rec.point.y2-rec.point.y1;
   // int pow2 = pow(dif2, 2);

    

    double area = dif1*dif2;

    std::cout<<"---------------------------"<<std::endl;
    std::cout<<"Area: "<<area<<std::endl;

    return 0;

}