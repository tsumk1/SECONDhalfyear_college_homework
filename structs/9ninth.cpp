//Зчитай два комплексні числа та виведи їх суму.
#include <iostream>

struct Complex{
    double imag;
    double real;
};
int main(){
    Complex complex1;
    Complex complex2;

    std::cout<<"Complex1 - real: ";
    std::cin>> complex1.real;
    std::cout<<"Complex1 - imag: ";
    std::cin>> complex1.imag;


    std::cout<<"Complex2 - real: ";
    std::cin>> complex2.real;
    std::cout<<"Complex2 - imag: ";
    std::cin>> complex2.imag;

    double SumImag = complex1.imag+complex2.imag;
    double SumReal = complex1.real+complex2.real;
    
    std::cout<<"Sum: "<<SumReal<<'+'<<SumImag<<"i"<<std::endl;
    return 0;
}