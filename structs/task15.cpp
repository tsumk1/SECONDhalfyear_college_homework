//Зчитай дані про 3 товари та знайди найдешевший.
#include <iostream>
#include <string>

struct Product{
	std::string name;
	double price;
};
int main(){
    struct Product product1;
    struct Product product2;
    struct Product product3;

    std::cout<<"Product1 - name: ";
    std::getline(std::cin, product1.name);
    std::cout<<"Product1 - price: ";
    std::cin>> product1.price;
    std::cin.ignore();

    std::cout<<"Product2 - name: ";
    std::getline(std::cin, product2.name);
    std::cout<<"Product2 - price: ";
    std::cin>> product2.price;
    std::cin.ignore();
    
    std::cout<<"Product3 - name: ";
    std::getline(std::cin, product3.name);
    std::cout<<"Product3 - price: ";
    std::cin>> product3.price;

    if(product1.price<product2.price && product1.price<product3.price){
        std::cout<<"Cheapest: "<< product1.name<< " ("<<product1.price<<")"<<std::endl;
    }else if(product2.price<product1.price && product2.price<product3.price){
          std::cout<<"Cheapest: "<< product2.name<< " ("<<product2.price<<")"<<std::endl;
    }else{
          std::cout<<"Cheapest: "<< product3.name<< " ("<<product3.price<<" UAN)"<<std::endl;
    }
    return 0;
}
