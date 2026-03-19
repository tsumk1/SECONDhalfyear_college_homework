//Напишіть шаблонну функцію, що знаходить мінімум двох значень.
#include <iostream>
#include <algorithm>

template<typename T>
T my_min(T a, T b) {
    return std::min(a, b);
}
int main(){
    std::cout<< my_min(5, 3)<<std::endl;
    return 0;
}