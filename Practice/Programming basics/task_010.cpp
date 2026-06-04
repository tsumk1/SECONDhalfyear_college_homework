//Розробити програму, що симулює функціонування автомобільного паркінгу, з реалізацією механізмів заїзду та виїзду транспортних засобів, урахуванням ліміту паркомісць та перевіркою поточного рівня заповненості.
#include <iostream>
using namespace std;

// заїзд авто
void enterCar(int &cars, int capacity) {
    if (cars < capacity) {
        cars++;
        cout << "Авто заїхало на паркінг\n";
    } else {
        cout << "Паркінг заповнений!\n";
    }
}

// виїзд авто
void exitCar(int &cars) {
    if (cars > 0) {
        cars--;
        cout << "Авто виїхало з паркінгу\n";
    } else {
        cout << "Паркінг порожній!\n";
    }
}

int main() {
    int capacity = 5;  // кількість місць
    int cars = 0;      // скільки авто зараз на паркінгу

    int choice;

    do {
        cout << "\n--- ПАРКІНГ ---\n";
        cout << "Зайнято місць: " << cars << " / " << capacity << endl;
        cout << "1 - Заїзд\n2 - Виїзд\n0 - Вихід\n";
        cout << "Вибір: ";
        cin >> choice;

        if (choice == 1) {
            enterCar(cars, capacity);
        }
        else if (choice == 2) {
            exitCar(cars);
        }

    } while (choice != 0);

    return 0;
}