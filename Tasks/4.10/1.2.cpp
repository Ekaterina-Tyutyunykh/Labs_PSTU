#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    double s; // кубические футы
    int x; // галлоны
    cout << "Введите число галлонов ";
    cin >> x; // Ввод числа галлонов
    s = x / 7.481; // Перевод галлонов в кубические футы
    cout << "Число кубических футов " << s; // Вывод числа кубических футов
    return 0;
}
