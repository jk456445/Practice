#include <stdio.h>
#include <stdlib.h>
#include "D:\�ۭqheaderfile\area.h"
int main()
{
    float base,height;

    printf("�п�J�T���Ϊ���: ");
    scanf("%f",&base);
    printf("�п�J�T���Ϊ���: ");
    scanf("%f",&height);
    printf("�T���Ϊ����n��%.2f\n",TRIANGLE(base,height));  /*����%.2f��.2��ܤp���I����ܨ��ATRIANGLE�w�g�Q��i�ۭq��*/
                                                            /*hearfile�̭��F�A�ҥH�o�Ӥ��Φb�ŧi�N�i�H��*/
    printf("%4.2f",PI);

    system("pause");
    return 0;

}
