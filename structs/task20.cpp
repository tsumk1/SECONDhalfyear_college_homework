//Оголоси структури Date, Time і Event (назва, дата, час). Зчитай дані та виведи інформацію про подію.
#include <iostream>
#include <string>

struct Date{
    int day;
    int month;
    int year;
};
struct Time{
    int hours;
    int minutes;
};
struct Event{
    std::string name;
    struct Time time;
    struct Date date;
};
int main(){
    struct Event event;

    std::cout<<"Event name: ";
    std::getline(std::cin, event.name);
    std::cout<<"Date - day: ";
    std::cin>> event.date.day;
    std::cout<<"Date - month: ";
    std::cin>>event.date.month;
    std::cout<<"Date - year: ";
    std::cin>>event.date.year;
    std::cout<<"Time - hours: ";
    std::cin>>event.time.hours;
    std::cout<<"Time - minutes: ";
    std::cin>>event.time.minutes;

    std::cout<<"-------------------------------------"<<std::endl;
    std::cout<<"Event: "<<event.name<<'\n'<<"When: "<< event.date.day<<"."<<event.date.month<<"."<<event.date.year<<" at "<<event.time.hours<<":"<<event.time.minutes<<std::endl;
}
