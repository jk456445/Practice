
#include <iostream>
#include <cstdlib>
using namespace std;
static int a;               // ���x�o�B�ⲿ����׃��a
void odd(void);    	        // ����ԭ�͵�����
int main(void)
{
   odd();	      	        // ����odd����
   cout << "after odd(), a=" << a << endl;
   system("pause");
   return 0;
}

void odd(void)		        // ��ӆ����odd()���Д�a���攵��ż��
{
   a=10;
   if(a%2==1)
      cout << "a=" << a << ", a�O�_��" << endl;   // �Lӡ��a���攵
   else
      cout << "a=" << a << ", a�O����" << endl;   // �Lӡ��b��ż��
   return;
}
