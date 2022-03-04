#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    while(ch!=17)       /*這是ctrl+q的ASCII碼，要同時按才有*/
    {
        ch=getch();  /*讀取字元，但不顯示在螢幕上*/
        printf("ASCII of ch=%d\n",ch);  /*印出取得字元的ASCII碼*/


    }
    printf("您已按了ctrl+q....\n");

    system("pause");
    return 0;


}
