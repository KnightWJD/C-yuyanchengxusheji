//有一字符串,包含n个字符.
//写一函数,将此字符串中从第m个字符开始的全部字符复制成为另一个字符串。

#include <stdio.h>
#include <string.h>
#define m 3

void cpy(char *p)
{
    char new_arr[100]={};
    int i;

    strcpy(new_arr,p+m);
    printf("\n%s",new_arr);

}

int main()
{
    int array[100]={};
    gets(array);
    cpy(array);
    return 0;
}
