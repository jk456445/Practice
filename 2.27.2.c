#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num,a;
	printf("�п�J���:");
	scanf("%d %d",&num,&a);		/*��J�@�Ӿ�ơA�B���w��num�s��A�p�G�n���ӡA�榡�ƨ���n�Ϊť���j�}*/
	printf("num=%d\n a=%d\n",num,a);
	
	int b,c;
	printf("�п�J���:");
	scanf("%d,%d",&b,&c);		/*�]�i�H��,�j�}�A���O�ڭ̥��i�h���ɭԴN�n��,���i�H�Ϊť�or enter*/
	printf("b=%d\n c=%d\n",b,c);
	
	
	char tr[3];
	scanf("%s",tr);  		/*��J�r��ɡA�᭱���Ӧ]���O�}�C���W�١A�ҥH�e������& */ 
	printf("%s\n",tr);
	system ("pause");
	return 0; 
	
	
}
