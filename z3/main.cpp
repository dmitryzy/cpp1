#include <iostream>
#include <math.h>
double sqrt(double x);

using namespace std;
//�1.9
int main()
{
    double x,y;/*��������� ���������� */
    while(1==1){/*������ ����*/
        cout <<"input x:" << endl;/* ����� ������� x */
        cin>>x;/*���� �����*/
        y=0;//�������� �� ���������
        if(x<=0) y=sqrt(1-x);/*���� x �������������*/
        if(x>2) y=x-2;/*���� x ������ 2*/
        cout<<"y="<<y << endl; /*����� ����� */
    }
    return 0;
}
