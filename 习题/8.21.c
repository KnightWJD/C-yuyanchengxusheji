//用指向指针的指针的方法对n个整数排序并输出。要求将排序单独写成一个函数。
//n个整数在主函数中输人,最后在主函数中输出。

#include <stdio.h>
#include <string.h>
#define n 5

void sort(int **p2)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            if(*(p2+i)>*(p2+j))
            {
                int *tmp = *(p2+i);
                *(p2+i)=*(p2+j);
                *(p2+j)=tmp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p2+i));
    }

}

int main()
{
    int array[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);

    }
    int *p1=array;
    sort(p1);

    return 0;

}
