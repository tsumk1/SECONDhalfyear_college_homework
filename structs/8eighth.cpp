//  Зчитай дані про два товари та виведи, який дорожчий.
#include <iostream>
#include <string>

struct Product{
	std::string name1;
	double price1;
    std::string name2;
	double price2;
};

int main(){
    struct Product product;
   

    std::cout<<"Product1"<<std::endl;
    std::cout<<"Enter name: ";
	std::getline(std::cin, product.name1);
	std::cout<<"Enter price: ";
	std::cin>> product.price1;
    std::cin.ignore();
	
	

    std::cout<<"Product2"<<std::endl;
    std::cout<<"Enter name: ";
	std::getline(std::cin, product.name2);
	std::cout<<"Enter price: ";
	std::cin>> product.price2;


    if(product.price1>product.price2){
        std::cout<<product.name1<<" is more expensive."<<std::endl;
    }else{
        std::cout<<product.name2<<" is more expensive."<<std::endl;
    }
    
    return 0;

}