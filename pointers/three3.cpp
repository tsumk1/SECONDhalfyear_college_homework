//Pointer Swap (Two Integers)
#include <iostream>
int main() {
    int x = 10;
    int y = 20;

    int *px = &x;
    int *py = &y;
    std::cout<<"Before \n"<<"x = "<< *px << " " << "y = "<< *py <<std::endl;

    int tmp = *px;
    *px = *py;
    *py = tmp;
    std::cout<<"After \n"<<"x = "<< *px << " " << "y = "<< *py <<std::endl;

    

    return 0;



} 
