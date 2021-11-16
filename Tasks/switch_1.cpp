#include<iostream>
using namespace std;

int main()
{
	int n;
	setlocale(LC_ALL, "Rus");
	cout << "Введите число от 1 до 10:  ";
	cin >> n;
	switch (n)
    {
    case 1: cout << "1" << endl;
    case 2: cout << "2" << endl;
    case 3: cout << "3" << endl;
    case 4: cout << "4" << endl;
    case 5: cout << "5" << endl;
    case 6: cout << "6" << endl;
    case 7: cout << "7" << endl;
    case 8: cout << "8" << endl;
    case 9: cout << "9" << endl;
    case 10: cout << "10" << endl; break;
    default: cout << "Число должно быть от 1 до 10" << endl;
    }
	return 0;
}