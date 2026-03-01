//Очистити вектор (size = 0), але не звільняти пам'ять.
#include <iostream>

struct int_vector{
     int* data; 
    int size; 
    int capacity;

    void clear();

};

void int_vector::clear(){ 
    size=0;
}

int main(){
    int_vector v;
    v.capacity = 5;
    v.data = new int[v.capacity]; 

    v.data[0] = 10;
    v.data [1] = 20; 
    v.data [2] = 30;
    v.data [3] = 40;

    v.size = 4;

    std::cout<<"Before clear: "<<std::endl;

    for(int i = 0; i< v.size; i++){ 
        std::cout<< v.data[i]<<" "<<std::endl;
    } 

    v.clear(); 

    std::cout<<"-------------\n"<<"After: "<<std::endl;

    for(int i = 0; i< v.size; i++){
        std::cout<< v.data[i]<<" "<<std::endl;
    }

    delete[] v.data; 

    return 0;
}
