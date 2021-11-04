#include<iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int hourn, minn, sekn; // начало временного отрезкка
    int hourf, minf, sekf; // конец временнго отрезка
    int hourp, minp, sekp; // длина временного отрезка
    int T; //длина промежутка в секундах

    cout << "Введите время начало временного отрезка" << endl; // Ввод начала временного промежутка
    cout << "Часы: ";
    cin >> hourn;
    cout << "Минуты: ";
    cin >> minn;
    cout << "Секунды: ";
    cin >> sekn;

    cout << "Введите время конца временного отрезка" << endl; // Ввод конца временного промежутка
    cout << "Часы: ";
    cin >> hourf;
    cout << "Минуты: ";
    cin >> minf;
    cout << "Секунды: ";
    cin >> sekf;

    T = (hourf * 3600 + minf * 60 + sekf) - (hourn * 3600 + minn * 60 + sekn); // Составление длины временнго промежутка в секундах
    hourp = (T / 3600);
    minp = (T % 3600) / 60;
    sekp = (T % 3600) % 60;

    cout << "Длина временного промежутка:" << endl; // Вывод длины временного промежутка

    cout << "Часы:" << "\t";
    cout << hourp;
    cout << ";  Минуты:" << "\t";
    cout << minp;
    cout << ";  Секунды:" << "\t";
    cout << sekp;
}
