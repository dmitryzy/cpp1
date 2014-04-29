#include <iostream>
#include <stdio.h>
#include <ctype.h>
//Б 3.9
using namespace std;
double f(double a,double b,double c,double x)
{//Функция для расчета f(x)
    double y;//переменные
    y=1+x/c;//Значение по умолчанию
    if((a<0)and(x!=0))//1-е условие
    {
        y=a*x*x+b*b*x;
    }
    if((a>0)and(x==0))//2-е условие
    {
        y=x-a/(x-c);

    }
    return y;
}

int main()
{
    double a,b,c,x1,x2,dx,x;//Переменные
    //Ввод данных
    cout <<"a: ";cin >>a;
    cout <<"b: ";cin >>b;
    cout <<"c: ";cin >>c;
    cout <<"xmin: ";cin >>x1;
    cout <<"xmax: ";cin >>x2;
    cout <<"dx: ";cin >>dx;
    x=x1;
    printf("|\t x \t\t |\t f(x) \t\t | \n");
    //Вывод таблицы результатов в цикле от x1 до x2 с шагом dx
    while(x<=x2)
        {
            x+=dx;
            printf("|\t %g \t\t |\t %g \t\t | \n",x,f(a,b,c,x));
        }
    return 0;
}

