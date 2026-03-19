/*Створіть структуру student з полями: - id (int) - age (int) - grade (double)

Реалізуйте operator<< для виведення в форматі: "Student #ID (age: A, grade: G)" */

#include <iostream>

struct student{
    int id;
    int age;
    double grade;
};

std::ostream& operator<<(std::ostream& out, const student& s) {
    out << "Student: "<< '#'<<"Id"<< s.id << '('<< "age: "<< s.age<<','<< " grade: "<< s.grade<< ')';
    return out;
}
int main(){
    struct student s;
    s.id = 2468;
    s.age = 17;
    s.grade = 11.26;

    std::cout<< s <<std::endl;
    return 0;


}