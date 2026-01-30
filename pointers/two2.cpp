// Changing a value using a pointer 
#include <iostream>
int main () {

    int x = 15;
    int *ptr = &x;
    std::cout<< *ptr<< std::endl;


    //Change to 10 
    *ptr = 10;
    std::cout<< *ptr<< std::endl;
    return 0;






}