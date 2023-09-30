#include <iostream>
using namespace std;

int main() {
    // Создаем переменные 
    int a, b;
    // Вывод текста
    cout << "Введите первое число: ";
    // Ввод данных переменной 
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;

    // Результат
    int sum = a + b;

    cout << "Сумма чисел: " << sum << endl;

    return 0;
}