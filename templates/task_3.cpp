//Створіть структуру point з полями x та y типу int. Реалізуйте оператор виведення <<.
#include <iostream>

struct point{
    int x;
    int y;

};
std::ostream& operator<<(std::ostream& out, const point& p) {
    out << "(" << p.x << ", " << p.y << ")";
    return out;
}
int main() {

    struct point p{5, 10};

    std::cout << p << std::endl; 

    return 0;
}