#include <iostream>
#include <string>

struct Book{
    std::string title;
    std::string author;
    int year;
};

int main(){

    struct Book book1;

    std::cout<<"Enter title: ";
    std::getline(std::cin, book1.title);

    std::cout<<"Enter author: ";
    std::getline(std::cin, book1.author);

    std::cout<< "Enter  year: ";
    std::cin>> book1.year;

    std::cout<< '\n' <<book1.title<< " by "<<book1.author<< '('<<book1.year<<')'<<std::endl;

    return 0;
}
