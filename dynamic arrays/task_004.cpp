//Повернути посилання на перший елемент.
#include <iostream>

struct int_vector{
    int* data; 
    int size; 
    int& front();

};

int& int_vector::front() {
    if(size == 0){
        std::cout<< "Vector is empty."<<std::endl;
        exit(1);
    }
    return data[0];
}
int main(){
  
    return 0;
}

