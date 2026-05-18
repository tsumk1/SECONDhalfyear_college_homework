//Повернути посилання на останній елемент.
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
    return data[size - 1];
}
int main(){
    return 0;
}

