
#include <iostream>
#include <cstdlib>
using namespace std;
static int a;               // 定義靜態外部整數變數a
void odd(void);    	        // 函數原型的宣告
int main(void)
{
   odd();	      	        // 呼叫odd函數
   cout << "after odd(), a=" << a << endl;
   system("pause");
   return 0;
}

void odd(void)		        // 自訂函數odd()，判斷a為奇數或偶數
{
   a=10;
   if(a%2==1)
      cout << "a=" << a << ", a琌计" << endl;   // 印出a為奇數
   else
      cout << "a=" << a << ", a琌案计" << endl;   // 印出b為偶數
   return;
}
