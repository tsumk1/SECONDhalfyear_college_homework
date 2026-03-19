//Напишіть три перевантажені функції print_info, які виводять інформацію про число, текст та символ.
#include <iostream>
#include <algorithm>
#include <string>


void print_info(int x) {
    std::cout << "Number: " << x << std::endl;
}

void print_info(const char* text) {
  std::cout<<"Text: "<< text <<std::endl;
}

void print_info(char c) {
   std::cout <<"Character: "<< c <<std::endl;
}

int main(){
    int x = 34;
    const char* text = "text";
    char c = '!';

    print_info(x);
    print_info(text);
    print_info(c);
 
    return 0;
}