
#include <iostream>
#include <cstdlib>
using namespace std;
void peri(double),area(double);     //����ԭ�͵�����
int main(void)
{
   extern double pi;				// ����ȫ��׃��
   double r=1.0;
   cout << "pi=" << pi << endl;
   cout << "radius=" << r << endl;
   peri(r);			                // ������ӆ�ĺ���
   area(r);
   system("pause");
   return 0;
}
double pi=3.14;		                // �~�ⲿ׃��pi�O��ֵ��3.14
void peri(double r)	                //  ��ӆ����peri()
{
   cout << "peripheral length=" << 2*pi*r << endl;
   return;
}

void area(double r)	                // ��ӆ����area()
{
   cout << "area=" << pi*r*r << endl;
   return;
}
