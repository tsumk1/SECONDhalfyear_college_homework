//Розробити функцію, яка приймає масив рядків довільної довжини та повертає відсортований масив відповідно до кількості символів у кожному рядку.
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> sortByLength(vector<string> arr) {
    sort(arr.begin(), arr.end(), [](string a, string b) {
        return a.length() < b.length();
    });

    return arr;
}

int main() {
    int n;
    cout << "Введіть кількість рядків: ";
    cin >> n;

    cin.ignore(); 

    vector<string> arr(n);

    cout << "Введіть рядки:\n";
    for (int i = 0; i < n; i++) {
        getline(cin, arr[i]); 
    }

    vector<string> sorted = sortByLength(arr);

    cout << "\nВідсортований масив:\n";
    for (string s : sorted) {
        cout << s << endl;
    }

    return 0;
}
