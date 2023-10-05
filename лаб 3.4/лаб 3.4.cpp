// Lab_03_4.cpp
// < Цай Девід >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 23
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double R, x, y; // вхідний параметр і радіус

    cout << " R = ";
    cin >> R;
    cout << " x = ";
    cin >> x;
    cout << " y = ";
    cin >> y;

    // розрахунок відстані від точки до початку координату
    double distance_from_origin = sqrt(pow(x, 2) + pow(y, 2));

    // розгалуження в правильній формі
    if (distance_from_origin <= (2 * R) && distance_from_origin >= R) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}
