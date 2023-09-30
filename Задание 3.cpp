#include<iostream>
using namespace std;
int main() {
	int days, hours, minutes, seconds;
	cout << "введите число дней";
	cin >> days;
	cout << "введите число часов";
	cin >> hours;
	cout << "введите число  минут";
	cin >> minutes;
	cout << " введите число секунд";
	cin >> seconds;
	int s = (days * 86400) + (hours * 60 * 60) + (minutes * 60) + seconds;
	cout << s;
}