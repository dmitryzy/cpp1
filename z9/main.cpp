#include <iostream>
#include <math.h>

using namespace std;
//G2.9
int main()
{
    double x,x0,x1,dx,h,f,s1,e=0;
    while ((x1<x0)or(dx>=fabs(x1-x0)/5))
    {//���� ������
        if(e!=0) cout << "invalid data!" << endl;
        else e=1;
        cout << "x0 ";cin >>x0;
        cout << "x1 ";cin >>x1;
        cout << "dx ";cin >>dx;
    }
    f=0;//��������� ��������
    for(x=x0;x<=x1;x+=dx)
    {
        h=log(4*x*x+1);//������ ������
        s1=h*dx;//������ ������� ��������������
        f+=s1;//������������
    }
    cout<<"F=  "<<f<<endl;//����� ����������
    return 0;
}
