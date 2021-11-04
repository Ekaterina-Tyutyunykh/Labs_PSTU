#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int F;
    double C;
    cout << "Введите температуру в градусах по Фаренгейту : ";
    cin >> F;
    C = (5 * (F – 32)) / 9;
    cout << "Тепмература в градусах по Цельцию : " << C;
    return 0;
}
