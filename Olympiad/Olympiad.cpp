#include <iostream>
#include <ctime>
using namespace std;

void first()
{
    int num, f, s, t;
    bool flag = false;
    setlocale(LC_ALL, "Rus");
    cout << "Введите трехзначное число" << endl;
    cin >> num;
    while ((num < 100) || (num > 1000)) {
        cout << "Введите трехзначное число" << endl;
        cin >> num;
    }
    f = num % 10;
    num = num / 10;
    s = num % 10;
    t = num / 10;
    while (flag == false) {
        if ((f == s) || (f == t) || (s == t)) {
            cout << "Цифры в числе не должны повторяться, введите новое число" << endl;
            cin >> num;
            f = num % 10;
            num = num / 10;
            s = num % 10;
            t = num / 10;
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
    setlocale(LC_ALL, "Rus");
    srand(time(0)); 
    num = rand() % 100;
    system("pause");
    //cout << num << endl; //вывод загаданного числа
    cout << "Введите число, осталось попыток 7" << endl;
    cin >> a;
    while ((num != a)&&(i>=0)) {//пока число не угадано и количество попыток не истекло
        if (a > num) {
            cout << "Число больше загаданного" << endl;
        }
        else {
            cout << "Число меньше загаданного" << endl;
        }
        cout << "Вы не угадали, количество попыток " << i << endl;
        i--;
        cin >> a;
    }
    if (i >= 0) {
        cout << "Вы угадили число " << num << endl;
     }
   
}

int main()
{
    second();
    return 0;
}