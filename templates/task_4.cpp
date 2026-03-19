//Розширьте задачу 3. Реалізуйте оператор введення >>.
#include <iostream>

struct point{
    int x;
    int y;

};

std::istream& operator>>(std::istream& in, point& p) {
    in >> p.x;
    in >> p.y;
    return in;
}

std::ostream& operator<<(std::ostream& out, const point& p) {
    out << "(" << p.x << ", " << p.y << ")";
    return out;
}
int main() {

    struct point p;
    std::cout<<"Enter x: "<<std::endl;
    std::cin>> p.x;
    std::cout<<"Enter y: "<<std::endl;
    std::cin>> p.y;

    std::cout << p << std::endl; 

    return 0;
}
