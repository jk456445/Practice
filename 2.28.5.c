#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i=1, fact=1;
    do
    {
        printf("�п�Jn��(n>0):");
        scanf("%d",&n);

    }while(n<=0);       /*�T�O��J���ȬO�j��0����*/

    do
    {
        fact*=i;
        i++;

    }while(i<=n);
    printf("%d!�����׬�%d\n",n,fact);

    system("pause");
    return 0;
}

