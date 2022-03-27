#include <iostream>
using namespace std;


void out(int* mass, int* n) {
    for (int i = 0; i < *n; i++) {
        cout << mass[i] << " ";
    }
    cout << endl;
}

void hoar(int* mass, int first, int last, int *n)
{
    int i = first, j = last;
    int temp,
    x = mass[(first + last) / 2];
    cout << "reference " << x << endl;
    do {
        while (mass[i] < x)
            i++;
        while (mass[j] > x)
            j--;

        if (i <= j)
        {
                cout << "swap " << mass[i] <<" "<<mass[j] << endl;
                temp = mass[i];
                mass[i] = mass[j];
                mass[j] = temp;
                out(mass, n);
            
            i++;
            j--;
        }
    } while (i <= j);
   
    if (i < last)
        hoar(mass, i, last,n);
    if (first < j)
        hoar(mass, first, j, n);
}



int main()
{
    int n;
    setlocale(LC_ALL, "Rus");
    cout << "Введите кол-во элементов массива" << endl;
    cin >> n;
    int* array = new int[n];
    for (int i = 0; i < n; i++) {
        array[i] = rand() % 50;
    }
    out(array, &n);
    cout << endl;
    hoar(array, 0, n - 1,&n);
    out(array, &n);
    delete[]array;
    return 0;
}
