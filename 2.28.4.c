#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    while(ch!=17)       /*�o�Octrl+q��ASCII�X�A�n�P�ɫ��~��*/
    {
        ch=getch();  /*Ū���r���A������ܦb�ù��W*/
        printf("ASCII of ch=%d\n",ch);  /*�L�X���o�r����ASCII�X*/


    }
    printf("�z�w���Fctrl+q....\n");

    system("pause");
    return 0;


}
