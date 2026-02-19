//Зчитай дані про 3 студентів (ім'я, бал) та виведи їх у таблиці.
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

    std::cout<<"Results: "<<std::endl;
    std::cout<<"1. "<<student1.name<<" - "<<student1.grade<<std::endl;
    std::cout<<"2. "<<student2.name<<" - "<<student2.grade<<std::endl;
    std::cout<<"3. "<<student3.name<<" - "<<student3.grade<<std::endl;

    return 0;
}