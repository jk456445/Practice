#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a=3, b=3;
    int score;

    printf("a=%d",a);
    printf(",a++���Ǧ^�Ȭ�%d",a++); /*�|������print�o��ơA�~��a+1*/
    printf(",a=%d\n",a);

    printf("b=%d",b);
    printf(",++b���Ǧ^�Ȭ�%d",++b);
    printf(",b=%d\n",b);

    printf("�п�J���Z:");
    scanf("%d",&score);

    if ((score<0)||(score>100))
    {
        printf("���Z�ƤJ���~");

    }
    else if ((score<60)&&(score>49))
    {
        printf("�ݭn�ɦ�\n");
    }
    else if (score>60)
    {
        printf("�ή�");

    }
    else if (score<40)
    {
        printf("���ή�");
    }
    system("pause");
    return 0;
}
