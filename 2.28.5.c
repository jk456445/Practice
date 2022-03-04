#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i=1, fact=1;
    do
    {
        printf("請輸入n值(n>0):");
        scanf("%d",&n);

    }while(n<=0);       /*確保輸入的值是大於0的數*/

    do
    {
        fact*=i;
        i++;

    }while(i<=n);
    printf("%d!的答案為%d\n",n,fact);

    system("pause");
    return 0;
}

