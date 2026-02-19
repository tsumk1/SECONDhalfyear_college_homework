#include <iostream>
#include <string>

struct Product{
	std::string name;
	double price;
	int quantity;
};

int main(){
	struct Product product1;

	std::cout<<"Enter name: ";
	std::getline(std::cin, product1.name);

	std::cout<<"Enter price: ";
	std::cin>> product1.price;

	std::cout<<"Enter quantity: ";
	std::cin>> product1.quantity;
	std::cout<< "--------------------------------"<<std::endl;

	double total = product1.price*product1.quantity;

	std::cout<< product1.name<<std::endl;
	std::cout<< "Total: "<< total<<std::endl;

	return 0;

}

