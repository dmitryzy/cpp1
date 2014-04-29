#include <iostream>
#include <math.h>

using namespace std;
//G2.9
int main()
{
    double x,x0,x1,dx,h,f,s1,e=0;
    while ((x1<x0)or(dx>=fabs(x1-x0)/5))
    {//¬вод данных
        if(e!=0) cout << "invalid data!" << endl;
        else e=1;
        cout << "x0 ";cin >>x0;
        cout << "x1 ";cin >>x1;
        cout << "dx ";cin >>dx;
    }
    f=0;//начальное значение
    for(x=x0;x<=x1;x+=dx)
    {
        h=log(4*x*x+1);//расчет высоты
        s1=h*dx;//расчет площади пр€моугольника
        f+=s1;//суммирование
    }
    cout<<"F=  "<<f<<endl;//вывод результата
    return 0;
}
