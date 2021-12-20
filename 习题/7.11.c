//写一个函数,用"起泡法"对输入的10个字符按由小到大的顺序排列

#include <stdio.h>
void Bubble_Sort(char array_sort[])
{
    int i,j,count=9,tmp;
    for(i=0;i<9;i++)
    {
        for(j=0;j<count;j++)
        {
            if(array_sort[j]>array_sort[j+1])
            {
                tmp = array_sort[j];
                array_sort[j]=array_sort[j+1];
                array_sort[j+1]=tmp;
            }
        }
        count--;
    }
    printf("%s",array_sort);
}

int main()
{
    char array_one[11]={0};
    printf("请输入10个字符\n");
    gets(array_one);
    Bubble_Sort(array_one);
    return 0;
}
