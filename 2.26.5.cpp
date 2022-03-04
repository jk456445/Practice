
#include <iostream>
#include <cstdlib>
using namespace std;
void peri(double),area(double);     //函數原型的宣告
int main(void)
{
   extern double pi;				// 宣告全域變數
   double r=1.0;
   cout << "pi=" << pi << endl;
   cout << "radius=" << r << endl;
   peri(r);			                // 呼叫自訂的函數
   area(r);
   system("pause");
   return 0;
}
double pi=3.14;		                // 外部變數pi設定值為3.14
void peri(double r)	                //  自訂函數peri()
{
   cout << "peripheral length=" << 2*pi*r << endl;
   return;
}

void area(double r)	                // 自訂函數area()
{
   cout << "area=" << pi*r*r << endl;
   return;
}
