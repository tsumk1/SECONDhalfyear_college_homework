//Pointer Swap (Two Integers) - user input 
#include <iostream>
int main() {
    int x, y;
    std::cout<<"Enter x: "<<std::endl;
    std::cin >> x;
    std::cout<< "Enter y: "<<std::endl;
    std::cin >> y;
    
    int *px = &x;
    int *py = &y;
    std::cout<<"Before \n"<<"x = "<< *px << " " << "y = "<< *py <<std::endl;

    
    int tmp = *px;
    *px = *py;
    *py = tmp;
    std::cout<<"After \n"<<"x = "<< *px << " " << "y = "<< *py <<std::endl;




} 
