#include <iostream>

using namespace std;
//D4.91
int main()
{
    double x,y,z,f;
    //¬вод данных
    cout << "x: "; cin >>x;
    cout << "y: "; cin >>y;
    cout << "z: "; cin >>z;
    //ѕоиск максимального числа из трех
    (x>y)? f=x : f=y;
    (z>f) ? f=z : 0;
    //делим произведение трех чисел на максимальное число
    cout << "result prod = " << x*y*z/f << endl;
    return 0;
}
