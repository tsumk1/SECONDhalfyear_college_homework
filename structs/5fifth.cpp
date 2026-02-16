#include <iostream>

struct Rectangle{
    int height;
    int width;
};

int main(){

    struct Rectangle rec;

    std::cout<<"Enter height: ";
    std::cin>>rec.height;

    std::cout<<"Enter width: ";
    std::cin>> rec.width;

    double area = rec.height*rec.width;
    double perimeter = 2*(rec.height+rec.width);

    std::cout<<"------------------------"<<std::endl;
    std::cout<<"Area: "<< area<<std::endl;
    std::cout<<"Perimeter: "<< perimeter<<std::endl;

    return 0;
}