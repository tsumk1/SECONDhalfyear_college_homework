//Розробити функцію, яка приймає довільну кількість числових значень у вигляді масиву та повертає кількість парних елементів.
#include <iostream>

using namespace std;

int countEven(int arr[], int size)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int size;

    cout << "Enter the number of elements: ";
    cin >> size;

    int numbers[size];

    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }

    cout << "Number of even elements: ";
    cout << countEven(numbers, size);

    return 0;
}