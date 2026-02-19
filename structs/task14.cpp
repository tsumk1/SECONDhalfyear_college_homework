//Зчитай дані про 3 товари (назва, ціна, кількість) та обчисли загальну вартість складу.
#include <iostream>
#include <string>

struct Product{
	std::string name;
	double price;
	int quantity;
};
int main() {
    struct Product product1;
    struct Product product2;
    struct Product product3;

    std::cout<<"Product1 - name: ";
    std::getline(std::cin, product1.name);
    std::cout<<"Product1 - price: ";
    std::cin>> product1.price;
    std::cout<<"Product1 - quantity: ";
    std::cin>> product1.quantity;
    std::cin.ignore();

    std::cout<<"Product2 - name: ";
    std::getline(std::cin, product2.name);
    std::cout<<"Product2 - price: ";
    std::cin>> product2.price;
    std::cout<<"Product2 - quantity: ";
    std::cin>> product2.quantity;
    std::cin.ignore();

    std::cout<<"Product3 - name: ";
    std::getline(std::cin, product3.name);
    std::cout<<"Product3 - price: ";
    std::cin>> product3.price;
    std::cout<<"Product3 - quantity: ";
    std::cin>> product3.quantity;

    double total1  = product1.price*product1.quantity;
    double total2 = product2.price*product2.quantity;
    double total3 = product3.price*product3.quantity;
    double total = total1+total2+total3;

    std::cout<<"-----------------"<<std::endl;
    std::cout<<"Total warehouse value: "<<total<<" UAN"<<std::endl;

    return 0; 
}