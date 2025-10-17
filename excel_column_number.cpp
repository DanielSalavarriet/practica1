#include <iostream>
#include <string>
using namespace std;

int titleToNumber(string columnTitle) {
    int result = 0;
    for (char c : columnTitle)
        result = result * 26 + (c - 'A' + 1);
    return result;
}

int main() {
    string column;
    cout << "Ingrese el título de columna (por ejemplo, AB): ";
    cin >> column;

    cout << "El número de columna es: " << titleToNumber(column) << endl;
    return 0;
}
