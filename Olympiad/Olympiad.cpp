#include <iostream>
#include <ctime>
using namespace std;

void first()
{
    int num, f, s, t, x;
    bool flag = false;
    setlocale(LC_ALL, "Rus");
    cout << "Введите трехзначное число" << endl;
    cin >> num;
    f = num % 10;
    x = num / 10;
    s = x % 10;
    t = x / 10; 
    while (flag == false) {
        if (((f == s) || (f == t) || (s == t))||((num < 100) || (num > 1000))) {
            cout << "Цифры в числе не должны повторяться, число должно быть трехзначным, введите новое число" << endl;
            cin >> num;
            f = num % 10;
            x = num / 10;
            s = x % 10;
            t = x / 10;
        }
        else {
            flag = true;
        }
    }
    cout << "Возможные комбинации чисел" << endl;
    cout << f << s << t << endl;
    cout << s << f << t << endl;
    cout << t << s << f << endl;
    cout << f << t << s << endl;
    cout << s << t << f << endl;
    cout << "Максимальное число: ";
    if ((f > s) && (f > t)) {    //первое наибольшее
        if (s > t) { //второе большего третьего
            cout << f << s << t << endl;
        }
        else {
            cout << f << t << s << endl;
        }
    }
    else {
        if (s > t) {//второе наибольшее
            if (f > t) {//первое больше третьего
                cout << s << f << t << endl;
            }
            else{
                cout << s << t << f << endl;
            }
        }
        else{//третье наибольшее
            if (f > s) {
                cout << t << f << s << endl;
            }
            else {
                cout << t << s << f << endl;
            }
        }
    }
}

void second()
{
    int num, i, a;
    i = 6;
    a = -1;
    setlocale(LC_ALL, "Rus");
    srand(time(0)); 
    num = rand() % 100;
    //cout << num << endl; //вывод загаданного числа
    cout << "Введите число, осталось попыток 6" << endl;
    while ((num != a) && (i > 0)) {
        cin >> a;
        if (a == num) {
            cout << "Вы угадили число " << num << endl;
            break;
        }
        if (a > num) {
            cout << "Число больше загаданного" << endl;
        }
        else {
            cout << "Число меньше загаданного" << endl;
        }
        i--;
        cout << "Вы не угадали, количество попыток " << i << endl;
    }
}

int main()
{
    setlocale(LC_ALL, "Rus");
    int i;
    cout << "Введите номер задачи (1 или 2)" << endl;
    cin >> i;
    if (i == 1) {
        first();
    }
    else {
        second();
    }
    return 0;
}