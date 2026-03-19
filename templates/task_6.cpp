//Напишіть шаблонну структуру pair, яка зберігає два значення різних типів.
#include <iostream>

template<typename T, typename U>
struct pair {
    T first;
    U second;

    pair(T a, U b) : first(a), second(b) { 
        std::cout << first << ", " << second << std::endl;
    }
};

int main() {
    pair<int, double> myPair(10, 5.5); 
    return 0;
}