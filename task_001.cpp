//Видалити останній елемент вектора.
#include <iostream>


struct int_vector{
    int* data; // вказівник на динамічний масив
    int size; // скільки елементів вже зберігається
    int capacity; // скільки елементів поміщається в виділену пам'ять

    void pop_back();

};

void int_vector::pop_back(){ // int_vector:: - означає що функція належить структурі int_vector
    if(size>0){
        size--;
    }
}

int main(){
    int_vector v;
    v.capacity = 5; //вектор може використати максимум 5 елементів
    v.data = new int[v.capacity]; //створює динамінчий масив із 5 елементів , а 'new' це оператор який виділяє пам'ять у динамічній пам'яті і повертає адресу цієї пам'яті ...

    v.data[0] = 10;
    v.data [1] = 20; // Ну тут самі елементи масива
    v.data [2] = 30;
    v.data [3] = 40;

    v.size = 4;

    std::cout<<"Before pop_back: "<<std::endl;

    for(int i = 0; i< v.size; i++){ // Тут цикл проходиться по всім елементам масива і виводить їх 
        std::cout<< v.data[i]<<" "<<std::endl;
    } 

    v.pop_back(); // Виклик методу структури , тобто функції яка належить структурі int_vector

    std::cout<<"-------------\n"<<"After: "<<std::endl;

    for(int i = 0; i< v.size; i++){
        std::cout<< v.data[i]<<" "<<std::endl;
    }

    delete[] v.data; // Звільнення пам'яті ,видаляє динамічний масив створений через new . Тобто всьо - масиву більше нема.

    return 0;
}

//	ಠ_ಠ


