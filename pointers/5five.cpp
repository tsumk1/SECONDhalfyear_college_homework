//Null Pointer Check
#include <iostream>
int main(){
    int x;
    int *px = nullptr;
    if(px == nullptr){
        std::cout<<"The pointer does not point to any variable."<<std::endl;

    }
    else{
        std::cout<< px<< std::endl;
    }
    
    return 0;


}