//Зчитай два прямокутники та виведи, який має більшу площу.
#include <iostream>

struct Rectangle{
    double height;
    double width;
};

int main(){
    struct Rectangle rec1;
    struct Rectangle rec2;

    std::cout<<"Rectangle1 - height: ";
    std::cin>> rec1.height;
    std::cout<<"Rectangle1 - width: ";
    std::cin>> rec1.width;
    std::cout<<"Rectangle2 - height: ";
    std::cin>> rec2.height;
    std::cout<<"Rectangle2 - width: ";
    std::cin>> rec2.width;

    double area1 = rec1.height*rec1.width;
    double area2 = rec2.height*rec2.width;

    std::cout<<"-----------------\n"<<"Rectangle1 area: "<<area1<<std::endl;
    std::cout<<"Rectangle2 area: "<<area2<<"\n-----------------"<<std::endl;

    if(area1>area2){
        std::cout<<"Rectangle1 is larger"<<std::endl;
    }else{
        std::cout<<"Rectangle2 is larger"<<std::endl;
    }
    return 0;
}