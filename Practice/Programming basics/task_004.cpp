//Розробити функцію, яка приймає вхідні дані у вигляді довільного рядка та реалізує визначення кількості елементів, розділених символом двокрапки.
#include <iostream>
#include <string>

using namespace std;

int countElements(string text)
{
    int count = 1;

    for (char ch : text)
    {
        if (ch == ':')
        {
            count++;
        }
    }

    return count;
}

int main()
{
    string str;

    getline(cin, str);
    cout << countElements(str);

    return 0;
}
