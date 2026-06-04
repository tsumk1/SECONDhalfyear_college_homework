//Розробити програму, що реалізує механізм введення пароля, передбачаючи функції введення пароля у вигляді рядка, підрахунку кількості спроб та блокування доступу після досягнення заданої кількості помилкових введень.
#include <iostream>
#include <string>

using namespace std;

// функція перевірки пароля
bool checkPassword(string input, string correctPassword) {
    return input == correctPassword;
}

int main() {
    string password;
    cout<<"Введіть свій пароль: "<<std::endl;
    cin>> password;

   // string password = "1234";   
    string input;

    int maxAttempts = 3;       
    int attempts = 0;

    while (attempts < maxAttempts) {
        cout << "Введіть пароль: ";
        cin >> input;

        if (checkPassword(input, password)) {
            cout << "Доступ дозволено!" << endl;
            return 0;
        } else {
            attempts++;
            cout << "Неправильний пароль! Спроба " 
                 << attempts << " з " << maxAttempts << endl;
        }
    }

    cout << "ДОСТУП ЗАБЛОКОВАНО!" << endl;

    return 0;
}