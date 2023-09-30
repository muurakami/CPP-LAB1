#include <iostream>
using namespace std;

int calculateCircle() {
    double radius = 0.0;
    const double PI = 3.14; // Задаем значение π
    cout << "Введите радиус: " << endl;
    cin >> radius;

    double s = PI * pow(radius, 2);
    double l = 2 * PI * radius;

    cout << "Площадь круга: " << s << endl << "Длина круга: " << l;
}

int main()
{
    calculateCircle()

    return 0;
}
