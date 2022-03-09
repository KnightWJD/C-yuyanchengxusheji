//将n个数按输人时顺序的逆序排列,用函数实现。


#include <stdio.h>

#define n 5

void reverse(int *p)
{
    int i,j;
    int array_r[n];
    for(i=0,j=n-1;i<n;i++,j--)
    {
        array_r[j]=*(p+i);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",array_r[i]);
    }
}

int main()
{
    int array[n];
    printf("请输入 %d 个数\n",n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    reverse(array);
    return 0;
}
