#include <stdio.h>
#include <stdlib.h>
#include "D:\自訂headerfile\area.h"
int main()
{
    float base,height;

    printf("請輸入三角形的底: ");
    scanf("%f",&base);
    printf("請輸入三角形的高: ");
    scanf("%f",&height);
    printf("三角形的面積為%.2f\n",TRIANGLE(base,height));  /*那個%.2f的.2表示小數點後顯示兩位，TRIANGLE已經被放進自訂的*/
                                                            /*hearfile裡面了，所以這個不用在宣告就可以用*/
    printf("%4.2f",PI);

    system("pause");
    return 0;

}
