//有 n 个人围成一圈,顺序排号。从第 1 个人开始报数,（从1到3报数）,凡报到3的人退出圈子,问最后留下的是原来第几号的那位


#include <stdio.h>


#define n 10
int array_final[n]={0};
int j;
void disposal(int *p)
{
    int i;
    for(i=0,j=0;i<n;i++)
    {
        if(*(p+i)%3==0)
        {
            continue;
        }
        array_final[j]=*(p+i);
        j++;
    }
}

int main()
{
    int array[n]={1,2,3,4,5,6,7,8,9,10};
    disposal(array);
    printf("最后剩下的人分别是:\n");
    int i;
    for(i=0;i<j;i++)
    {
        printf("第 %d 号\n",array_final[i]);
    }
    return 0;
}
