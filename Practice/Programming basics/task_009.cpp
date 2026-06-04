//Розробити програму, що моделює роботу банкомата, із реалізацією функцій зняття коштів, поповнення рахунку та перевірки встановленого ліміту, з обов’язковою перевіркою умов можливості виконання кожної операції.
#include <iostream>


void deposit(double &balance, double amount) {
    if (amount > 0) {
        balance += amount;
       std::cout << "Поповнено!\n";
    } else {
       std::cout << "Невірна сума!\n";
    }
}


void withdraw(double &balance, double amount, double limit) {
    if (amount > 0 && amount <= balance && amount <= limit) {
        balance -= amount;
        std::cout << "Знято!\n";
    } else {
        std::cout << "Операція неможлива!\n";
    }
}

int main() {
    double balance = 1000;
    double limit = 500;

    int choice;
    double amount;

    do {
        std::cout << "\nБаланс: " << balance << " грн\n";
        std::cout << "1 - Поповнити\n2 - Зняти\n0 - Вихід\n";
        std::cout << "Вибір: ";
        std::cin >> choice;

        if (choice == 1) {
            std::cout << "Сума: ";
            std::cin >> amount;
            deposit(balance, amount);
        }
        else if (choice == 2) {
            std::cout << "Сума: ";
            std::cin >> amount;
            withdraw(balance, amount, limit);
        }

    } while (choice != 0);

    return 0;
}
