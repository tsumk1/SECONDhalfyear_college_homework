//Зчитай два моменти часу та обчисли різницю в секундах.
#include <iostream>

struct Time{
    int hours1;
    int minutes1;
    int seconds1;

    int hours2;
    int minutes2;
    int seconds2;
};


int main(){
     
    struct Time time;
    std::cout<<"Time 1"<<std::endl;
    std::cout<<"Enter hours: ";
    std::cin>> time.hours1;
    std::cout<<"Enter minutes: ";
    std::cin>> time.minutes1;
    std::cout<<"Enter seconds: ";
    std::cin>> time.seconds1;

    std::cout<<"Time 2"<<std::endl;
    std::cout<<"Enter hours: ";
    std::cin>> time.hours2;
    std::cout<<"Enter minutes: ";
    std::cin>> time.minutes2;
    std::cout<<"Enter seconds: ";
    std::cin>> time.seconds2;

    int time1 = time.hours1*(60*60)+time.minutes1*60+time.seconds1;
    int time2 = time.hours2*(60*60)+time.minutes2*60+time.seconds2;

    int difference;

    if(time1>time2){
        difference = time1-time2;
    }
    else{
        difference = time2-time1;
    }

    std::cout<<"--------------------------"<<std::endl;
    std::cout<<"Difference: "<< difference<<std::endl;

    return 0;
}