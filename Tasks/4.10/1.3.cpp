#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    const int A = 10; // константа (10)
    int B, C, D;
    B = 2 * A;// присваивание (20)
    D = B; //присваивание для операции декремента, чтобы не изменилось значение B
    C = --D; // декремент(19)
    cout << A << endl << B << endl << C << endl;
    return 0;
}
