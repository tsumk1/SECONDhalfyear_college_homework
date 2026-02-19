//Зчитай дані про 3 студентів та обчисли середній бал групи.
#include <iostream>

struct Student
{
    std::string name;
    double grade;
};

int main(){
    struct Student student1;
    struct Student student2;
    struct Student student3;

    std::cout<<"Student1 - name: ";
    std::getline(std::cin, student1.name); 
    std::cout<<"Student1 -grade: ";
    std::cin>> student1.grade;
    std::cin.ignore();

    std::cout<<"Student2 - name: ";
    std::getline(std::cin, student2.name); 
    std::cout<<"Student2 -grade: ";
    std::cin>> student2.grade;
    std::cin.ignore();

    std::cout<<"Student3 - name: ";
    std::getline(std::cin, student3.name); 
    std::cout<<"Student3 -grade: ";
    std::cin>> student3.grade;

    double avr = (student1.grade+student2.grade+student3.grade)/3;

    std::cout<<"------------------"<<std::endl;
    std::cout<<"Average grade: "<<avr<<std::endl;
    return 0;
}
