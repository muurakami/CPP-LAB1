#include <iostream>
using namespace std;

int main() {
    double galons;
    cout << "Введите число галонов: ";
    cin >> galons;

    double liters = galons * 3.78541;

    cout << "Количество литров: " << liters << endl;

    return 0;
}
