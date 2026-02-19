//Оголоси структури Product і Order (товар + кількість). Зчитай дані та обчисли вартість замовлення.
#include <iostream>
#include <string>
struct Product{
    std::string name;
    double price;
};
struct Order{
    struct Product prod;
    double quantity;
};
int main(){
    struct Order order;
    std::cout<<"Product name: ";
    std::getline(std::cin, order.prod.name);
    std::cout<<"Product price: ";
    std::cin>>order.prod.price;
    std::cout<<"Order quantity: ";
    std::cin>> order.quantity;

    double total = order.prod.price*order.quantity;

    std::cout<<"-------------------------------"<<std::endl;
    std::cout<<"Order total: "<<total<<std::endl;
    return 0; 

}