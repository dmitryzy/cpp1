#include <iostream>
#include <math.h>
double sqrt(double x);

using namespace std;
//Б1.9
int main()
{
    double x,y;/*Объявляем переменные */
    while(1==1){/*вечный цикл*/
        cout <<"input x:" << endl;/* вывод запроса x */
        cin>>x;/*ввод числа*/
        y=0;//Значение по умолчанию
        if(x<=0) y=sqrt(1-x);/*если x отрицательное*/
        if(x>2) y=x-2;/*если x больше 2*/
        cout<<"y="<<y << endl; /*вывод суммы */
    }
    return 0;
}
