#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a=3, b=3;
    int score;

    printf("a=%d",a);
    printf(",a++的傳回值為%d",a++); /*會先做完print這件事，才把a+1*/
    printf(",a=%d\n",a);

    printf("b=%d",b);
    printf(",++b的傳回值為%d",++b);
    printf(",b=%d\n",b);

    printf("請輸入成績:");
    scanf("%d",&score);

    if ((score<0)||(score>100))
    {
        printf("成績數入錯誤");

    }
    else if ((score<60)&&(score>49))
    {
        printf("需要補考\n");
    }
    else if (score>60)
    {
        printf("及格");

    }
    else if (score<40)
    {
        printf("不及格");
    }
    system("pause");
    return 0;
}
