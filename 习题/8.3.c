//输入 10 个整数，将其中最小的数与第一个数对换，把最大的数与最后一个数对换。
//写3个函数：①输入 10 个数；②进行处理；③输出 10 个数。

#include <stdio.h>

void Input(int *pa)
{
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%d",pa+i);
    }

}

void Disposal(int *pb)
{
    int i,tmp_min=*pb,tmp_max=*pb;
    for(i=0;i<10;i++)
    {
        tmp_min=tmp_min>*(pb+i)?*(pb+i):tmp_min;
        tmp_max=tmp_max>*(pb+i)?tmp_max:*(pb+i);
    }
    if(*(pb+9)==tmp_min);
    {
        *(pb+9)=*pb;
        *pb=tmp_min;
    }
    if(*pb==tmp_max);
    {
        *(pb+9)=*pb;
        *pb=tmp_max;
    }
    for(i=0;i<10;i++)
    {
        if(*(pb+i)==tmp_min)
        {
            *(pb+i)=*pb;
            *pb=tmp_min;
        }
        if(*(pb+i)==tmp_max)
        {
            *(pb+i)=*(pb+9);
            *(pb+9)=tmp_max;
        }
    }

}

void Print(int *pc)
{
    int i;
    printf("\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",*(pc+i));
    }
}

int main()
{
    int array[10];
    printf("请输入十个整数:\n");
    Input(array);
    Disposal(array);
    Print(array);
    return 0;
}
