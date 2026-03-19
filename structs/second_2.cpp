#include <iostream>
#include <string>

struct Product{
	std::string name;
	double price;
	int quantity;
};

int main(){
	struct Product product1;


	std::cout<< "--------------------------------"<<std::endl;

	double total = product1.price*product1.quantity;

	std::cout<< product1.name<<std::endl;
	std::cout<< "Total: "<< total<<std::endl;

	return 0;

}

