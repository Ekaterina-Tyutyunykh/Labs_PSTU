#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, “Rus”);
    int a, b;
    cout << «Введите числа, которые надо умножить « << endl;
    cin >> a >> b;
    cout << «Результат перемножения = « << a * b;
    return 0;
}
