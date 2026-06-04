//Розробити функцію, яка приймає вхідні дані у вигляді рядка, забезпечує їх збереження та здійснює виведення рядка у зворотному порядку.
#include <iostream>
#include <string>

using namespace std;

void reverseString(string text)
{
    for (int i = text.length() - 1; i >= 0; i--)
    {
        cout << text[i];
    }
}



int main() 
{
    string str;
  
    getline(cin, str);
    reverseString(str);

    return 0;
}
