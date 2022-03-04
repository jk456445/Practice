#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str[25];
	
	printf("Input a string:");
	gets(str);
	printf("The string is %s\n",str);
	puts(str);		/*用puts()印出來的會自動換行*/ 
	puts("what's your name?'");
	system ("pause");
	return 0;
	
}
