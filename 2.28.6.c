#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=1,j;

    while(i<=9)
    {
        j=1;        /*�n�bi���o�Ӱj��̳]j=1�~��A����@�}�l�N��i�@�_�ŧi�A���M�]��j�j��@����A�S����j���s�]��1�A�N���|�A�]�ĤG��i�j��F*/
        while(j<=9)
        {
            printf("%d*%d=%2d  ",i,j,i*j);
            j++;

        }
        printf("\n");
        i++;

    }
    system("pause");
    return 0;

}
