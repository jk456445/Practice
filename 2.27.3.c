#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("請輸入一個字元:");
	char ch=getchar();
	putchar('\n');		/* 換行字元要另外打一行出來，不能跟下面那個一起*/ 
	putchar(ch);
	printf("\n\" I love C language.\"");

	
	return 0;
}
