//将一个5X5的矩阵中最大的元素放在中心,4个角分别放4个最小的元素(顺序为
//从左到右,从上到下依次从小到大存放),写一函数实现之。用main函数调用。

#include <stdio.h>
#include <stdint.h>
#define row 5
#define col 5

void disposal(int *p)
{
    int i,j,k,max=INT32_MIN,max_idx;

    for(i=0;i<col*row;i++)
    {
        if(*(p+i)>max)
        {
            max = *(p+i);
            max_idx = i;
        }
    }
    int min,array_min_idx[4];
    for(i=0;i<4;i++)
    {
        min=INT32_MAX;
        for(j=0;j<row*col;j++)
        {
            for(k=0;k<i;k++)
            {
                if(j==array_min_idx[k])
                {
                    break;
                }
            }
            if(k!=i)
            {
                continue;
            }
            if(min>*(p+j))
            {
                min = *(p+j);
                array_min_idx[i]=j;
            }
        }
    }

    int center_idx = col*row/2;
    int left_up_idx = 0;
    int right_up_idx = col-1;
    int left_bottom_idx = row*(col-1);
    int right_bottom_idx = row*col-1;
    int tmp;

    tmp =*(p+center_idx); *(p+center_idx) = *(p+max_idx); *(p+max_idx) = tmp;
    tmp =*(p+left_up_idx); *(p+left_up_idx) = *(p+array_min_idx[0]); *(p+array_min_idx[0]) = tmp;
    tmp =*(p+right_up_idx); *(p+right_up_idx) = *(p+array_min_idx[1]); *(p+array_min_idx[1]) = tmp;
    tmp =*(p+left_bottom_idx); *(p+left_bottom_idx) = *(p+array_min_idx[2]); *(p+array_min_idx[2]) = tmp;
    tmp =*(p+right_bottom_idx); *(p+right_bottom_idx) = *(p+array_min_idx[3]); *(p+array_min_idx[3]) = tmp;



}

int main()
{
    int array[5][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    disposal(array);
    int i ;
    for(i=0;i<col;i++)
    {
        printf("%d %d %d %d %d ",array[i][0],array[i][1],array[i][2],array[i][3],array[i][4]);
        printf("\n");
    }
    return 0;
}
