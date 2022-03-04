#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num,a;
	printf("請輸入整數:");
	scanf("%d %d",&num,&a);		/*輸入一個整數，且指定給num存放，如果要輸兩個，格式化那邊要用空白鍵隔開*/
	printf("num=%d\n a=%d\n",num,a);
	
	int b,c;
	printf("請輸入整數:");
	scanf("%d,%d",&b,&c);		/*也可以用,隔開，但是我們打進去的時候就要用,不可以用空白or enter*/
	printf("b=%d\n c=%d\n",b,c);
	
	
	char tr[3];
	scanf("%s",tr);  		/*輸入字串時，後面那個因為是陣列的名稱，所以前面不用& */ 
	printf("%s\n",tr);
	system ("pause");
	return 0; 
	
	
}
