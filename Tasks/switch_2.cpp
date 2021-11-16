#include<iostream>
using namespace std;

int main()
{
	int a, b, n;
	setlocale(LC_ALL, "Rus");
	cout << "Введите два целых числа:"<< endl;
	cin >> a >> b;
    cout << "Введите, что нужно сделать: 1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление" << endl;
    cin >> n;
	switch (n)
    {
    case 1: cout << "Сложение: " << a+b << endl; break;
    case 2: cout << "Вычитание: " << a-b << endl; break;
    case 3: cout << "Умножение: " << a*b << endl; break;
    case 4: cout << "Целочисленное деление: " << a/b << endl; break;
    default: cout << "Число должно быть от 1 до 4" << endl;
    }
	return 0;
}