#include <iostream>
int main (){
    int x = 15;
    int *ptr = &x;
    std::cout<<"Address: "<<ptr <<std::endl;
    std::cout<<"Variable value: "<< *ptr <<std::endl;
    return 0;
}