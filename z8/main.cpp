#include <iostream>
#include <math.h>
using namespace std;
//F6
int main()
{
    double x,f,dx,df,n,eps=0,x0=-1,x1=1;
    cout <<"input dx "; cin >> dx;
    while((eps<=0)or(eps>1))
    {
        cout <<"input eps (0,1; 0,01; 0,001; ... 1) ";cin >> eps;
    }
    cout <<"\t x \t\t|\t\t  "<< "\t f(x) \t|\t  n" << endl;
    for(x=x0;x<x1;x+=dx)
    {//������� �������� ����������
        f=0;
        df=x;
        if(x!=0)
        {//������ �������� ���� ���� �� ����� ���������� �������� ��������
        //������� ����������� �����: ������ ����� ���� ������ �������� ��������
            while(fabs(df)>eps)
            {
                df*=-x/n;
                ++n;
                f+=df;
            }
            //����� ����������
            cout <<x<<"\t\t\t|\t\t  "<< f <<"\t|\t  "<<n << endl;
        }
    }
    return 0;
}
