#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b, c, d, e;
    cout << "Введите пять чисел" << endl;
    cin >> a >> b >> c >> d >> e;
    cout << "В обратной последовательности = " << e << " " << d << " " << c << " " << b << " " << a;
    return 0;
}
