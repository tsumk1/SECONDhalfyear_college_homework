//Повернути true, якщо вектор порожній.
#include <iostream>

struct int_vector{
     int* data; 
    int size; 
    int capacity;

    bool is_empty();

};

bool int_vector::is_empty(){ 
    if(size==0)
    return true;

    return false;

}

int main(){
    int_vector v;
    v.capacity = 5;
    v.data = new int[v.capacity]; 
    v.size;

    v.data[0] = 10;
    v.data [1] = 20; 
    v.data [2] = 30;
    v.data [3] = 40;

    std::cout<<"Enter size: "<<std::endl;
    std::cin>> v.size;

    std::cout<<"----------------------------------"<<std::endl;

    if(v.is_empty() == false){
        std::cout<<"False"<<std::endl;
    }else{
        std::cout<<"True. Empty"<<std::endl;
    }
    
    delete[] v.data; 

    return 0;
}
