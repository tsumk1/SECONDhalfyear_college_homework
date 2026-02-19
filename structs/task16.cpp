//Оголоси структури Date і Student (з вкладеною датою). Зчитай дані та виведи інформацію про студента.
#include <iostream>
#include <string>
struct Date{
    int day;
    int month;
    int year;
};
struct Student{
    std::string name;
    struct Date date;
};
int main(){
    struct Student s;

    std::cout<<"Enter name: ";
    std::getline(std::cin, s.name);
    

    std::cout<<"Enter day: ";
    std::cin>> s.date.day;

    std::cout<<"Enter month: ";
    std::cin>>s.date.month;

    std::cout<<"Enter year: ";
    std::cin>>s.date.year;
    std::cin.ignore();
    
    std::cout<<"-------------------------------"<<std::endl;

    std::cout<<s.name<<" born on "<<s.date.day<<"."<<s.date.month<<"."<<s.date.year<<std::endl;
    return 0;

}
