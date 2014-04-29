#include <iostream>
#include <math.h>

using namespace std;
//04.69
int main()
{
    double x,y;
    // ввод переменных
    cout << "x: " ;cin >>x;
    cout << "y: " ;cin >>y;
    // проверка условия
    (sqrt(y)<x) ? cout<<"x="<< x <<";y="<< 5*y << endl : cout<< "x="<< x <<";y="<< y << endl;
    return 0;
}
