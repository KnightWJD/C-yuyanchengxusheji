//输入三个整数,按由小到大的顺序输出

#include <stdio.h>

int main()
{
    int a,b,c,tmp;
    int *p_a=&a,*p_b=&b,*p_c=&c;
    printf("请输入三个整数:\n");
    scanf("%d%d%d",p_a,p_b,p_c);
    if(*p_a>*p_b)
    {
        tmp = *p_a;
        *p_a=*p_b;
        *p_b=tmp;
    }
    if(*p_a>*p_c)
    {
        tmp = *p_a;
        *p_a=*p_c;
        *p_c=tmp;
    }
    if(*p_b>*p_c)
    {
        tmp = *p_b;
        *p_b=*p_c;
        *p_c=tmp;
    }
    printf("\n%d %d %d",a,b,c);
    return 0;
}
