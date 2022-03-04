#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str[25];
	
	printf("Input a string:");
	gets(str);
	printf("The string is %s\n",str);
	puts(str);		/*str字串會印出來*/
	puts("what's your name?'");
	system ("pause");
	return 0;
	
}
