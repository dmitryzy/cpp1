#include <iostream>

using namespace std;
//D4.91
int main()
{
    double x,y,z,f;
    //���� ������
    cout << "x: "; cin >>x;
    cout << "y: "; cin >>y;
    cout << "z: "; cin >>z;
    //����� ������������� ����� �� ����
    (x>y)? f=x : f=y;
    (z>f) ? f=z : 0;
    //����� ������������ ���� ����� �� ������������ �����
    cout << "result prod = " << x*y*z/f << endl;
    return 0;
}
