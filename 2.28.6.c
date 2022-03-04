#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=1,j;

    while(i<=9)
    {
        j=1;        /*要在i的這個迴圈裡設j=1才行，不能一開始就跟i一起宣告，不然跑完j迴圈一輪後，沒有把j重新設為1，就不會再跑第二輪i迴圈了*/
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
