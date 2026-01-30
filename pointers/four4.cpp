//Pointer Comparison
#include <iostream>
int main(){
    int x = 10;
    int y = 20;

    int *px = &x;
    int *py = &y;
    
    if(px>py){
        std::cout<< " 'px' > 'py' :\n"<<px<<std::endl;
    }else{
         std::cout<< " 'py' > 'px' :\n"<<py<<std::endl;
    }
    return 0;


}