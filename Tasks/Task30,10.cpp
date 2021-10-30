#include <iostream>
#include <ctime>
using namespace std;

void first()
{
    int num, f, s, t, x; //переменны для первой, втрой и третьей цифры числа
    bool k = false;
    setlocale(LC_ALL, "Rus");
    cout << "Введите трехзначное число" << endl;
    cin >> num;
    f = num % 10; // первая цифра
    x = num / 10; // отбрасывание последней цифры
    s = x % 10; // вторая цифра
    t = x / 10;  // третья цифра
    while (k == false) {

        f = num % 10; // первая цифра
        x = num / 10; // отбрасывание последней цифры
        s = x % 10; // вторая цифра
        t = x / 10;  // третья цифра
        if (num > 100) {
            if (num < 999) {
                if (f != s) {
                    if (f != t) {
                        if (t != s) {
                           k = true;
                        }
                    }
                }
            }
        }
        if (k == false) {
            cout << "Число не трехзначное или содержит повторяющиейся цифры. Повторите ввод:" << "\n";
            cin >> num;
        }
    }
    cout << "Возможные комбинации чисел" << endl;
    cout << f << s << t << endl; // вывод возможных комбинаций 
    swap(s, t); // перемена местами значений двух переменных
    cout << f << s << t << endl;
    swap(f, s);
    cout << f << s << t << endl;
    swap(f, t);
    cout << f << s << t << endl;
    swap(s, t);
    cout << f << s << t << endl;
    cout << "Максимальное число: ";
    if (f > s) {    //первое наибольшее
        if (f > t) { //первое наибольшее
            if (s > t) { //второе большего третьего
                cout << f << s << t << endl;
            }
            else {
                cout << f << t << s << endl;
            }
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
    i = 7;
    a = -1;
    bool k = true;
    setlocale(LC_ALL, "Rus");
    srand(time(0)); 
    //num = rand() % 100 + 1; // генерация рандомного числа
    cout << num << endl; //вывод загаданного числа для проверки првильности работы программы
    cout << "Введите число, осталось попыток 7" << endl;
    while (k == true) {
        if (num != a) {
            if (i > 0) {
                k = true;
                cin >> a;
                if (a == num) {
                    cout << "Вы угадили число " << endl;
                    break;
                }
                if (a > num) {
                    cout << "Число больше загаданного" << endl;
                }
                else {
                    cout << "Число меньше загаданного" << endl;
                }
                i--; // уменьшение количества попыток
                if (i == 0) {
                    cout << "Вы не угадали " << endl;
                    break;
                }
                else {
                    cout << "Вы не угадали, количество попыток " << i << endl;
                }
            }
        }
    }
    cout << "Загаданное число " <<num <<  endl;
}

int main()
{
    setlocale(LC_ALL, "Rus");
    int i;
    cout << "Введите номер задачи (1 или 2)" << endl;
    cin >> i;
    if ((i == 1) || (i == 2)) { // переход к выбранной задаче
        if (i == 1) {
            first();
        }
        else {
            second();
        }
    }
    else {
        cout << "Введите 1 или 2" << endl;
    }
    return 0;
}