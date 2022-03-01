//有n个整数,使前面各数顺序向后移m个位置,最后 m个数变成最前面 m个数，
//写一函数实现以上功能，
//在主函数中输入 n 个整数和输出调整后的n个数。

#include <stdio.h>
#define n 10
#define m 3

void swap(int *p)
{
    int i,j=0,k=0,array_m[m],array_nm[n-m];
    for(i=n-1;i>n-1-m;i--)
    {
        array_m[m-j-1]=*(p+i);
        j++;
    }
    for(i=0;i<n-m;i++)
    {
        array_nm[i]=*(p+i);
    }
    for(i=0,j=0;i<n;i++)
    {
        if(i>=m)
        {
            *(p+i)=array_nm[k];
            k++;
        }
        else
        {
            *(p+i)=array_m[j];
            j++;
        }
    }
}

int main()
{

    int array[n]={0,1,2,3,4,5,6,7,8,9};
    swap(array);
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }

    return 0;
}
