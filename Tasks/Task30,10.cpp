#include <iostream>
#include <ctime>
using namespace std;

void first()
{
    int num, f, s, t, x; //переменны для первой, втoрой и третьей цифры числа
    bool flag = false;
    setlocale(LC_ALL, "Rus");
    cout << "Введите трехзначное число" << endl;
    cin >> num;
    f = num % 10; // первая цифра
    x = num / 10; // отбрасывание последней цифры
    s = x % 10; // вторая цифра
    t = x / 10;  // третья цифра
    while (flag == false) { // проверка на трехзначность и неповторение цифр в числе
        if (((f == s) || (f == t) || (s == t))||((num < 100) || (num > 1000))) {
            cout << "Цифры в числе не должны повторяться, число должно быть трехзначным, введите новое число" << endl;
            cin >> num;
            f = num % 10; // первая цифра
            x = num / 10; // отбрасывание последней цифры
            s = x % 10; // вторая цифра
            t = x / 10; // третья цифра
        }
        else {
            flag = true;
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
    swap(f, s);
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
    i = 7;
    a = -1;
    setlocale(LC_ALL, "Rus");
    srand(time(0)); 
    num = rand() % 100 + 1; // генерация рандомного числа
    //cout << num << endl; //вывод загаданного числа для проверки првильности работы программы
    cout << "Введите число, осталось попыток 7" << endl;
    while ((num != a) && (i > 0)) { // пока число не угадано и количество попыток не истекло 
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
        cout << "Вы не угадали, количество попыток " << i << endl;
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