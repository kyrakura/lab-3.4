// Lab_03_4.cpp
// < ��� ���� >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 23
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double R, x, y; // ������� �������� � �����

    cout << " R = ";
    cin >> R;
    cout << " x = ";
    cin >> x;
    cout << " y = ";
    cin >> y;

    // ���������� ������ �� ����� �� ������� ����������
    double distance_from_origin = sqrt(pow(x, 2) + pow(y, 2));

    // ������������ � ��������� ����
    if (distance_from_origin <= (2 * R) && distance_from_origin >= R) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}
