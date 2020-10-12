#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double A, B, C;
    cout << "Введите длину катетера" << endl;
    cout << "Катет A>";
    cin >> A;
    cout << "Катет B>";
    cin >> B;
    C = sqrt(pow(A, 2) + pow(B, 2)); //гипотинуза
    cout << "Периметр=" << A + B + C << endl;
    cout << "Площадь=" << (A * B) / 2;
}
