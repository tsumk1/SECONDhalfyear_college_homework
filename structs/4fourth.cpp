#include <iostream>


struct Time{
    int hours;
    int minutes;
    int seconds;
};

int main(){
    struct Time time;
    std::cout<<"Enter hours: ";
    std::cin>> time.hours;
    std::cout<<"Enter minutes: ";
    std::cin>> time.minutes;
    std::cout<<"Enter seconds: ";
    std::cin>> time.seconds;

    int total = time.hours*(60*60)+time.minutes*60+time.seconds;
    std::cout<<"------------------------"<<std::endl;
    std::cout<<"Total: "<< total<<std::endl;

    return 0;
}
