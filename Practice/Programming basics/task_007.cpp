//Розробити функцію, яка приймає масив рядків довільної довжини та повертає відфільтрований масив, що містить лише ті елементи, довжина яких перевищує три символи.
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> filterStrings(vector<string> arr) {
    vector<string> result;

    for (string s : arr) {
        if (s.length() > 3) {
            result.push_back(s);
        }
    }

    return result;
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

    vector<string> filtered = filterStrings(arr);

    cout << "\nВідфільтрований масив (довжина > 3):\n";
    for (string s : filtered) {
        cout << s << endl;
    }

    return 0;
}