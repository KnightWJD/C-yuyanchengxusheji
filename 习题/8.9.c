//写一个函数,将一个3x3的矩阵转置

#include <stdio.h>

void swap(int *p)
{
    int i,j,tmp;
    for(i=0;i<2;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(i==j)
            {
                continue;
            }
            tmp=*(p+3*i+j);         
            *(p+3*i+j)=*(p+3*j+i);      //规律:tmp=*(p+3*i+j) *(p+3*i+j)=*(p+3*j+i) *(p+3*j+i)=tmp
            *(p+3*j+i)=tmp;
        }
    }
    for(i=0;i<9;i++)
    {
        printf("%d ",*(p+i));
        if((i+1)%3==0)
        {
            printf("\n");
        }
    }
}

int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    swap(arr);
    return 0;
}
