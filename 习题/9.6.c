//13个人围成- -圈，从第1个人开始顺序报号1,2,3。凡报到3者退出圈子。找出最
//后留在圈子中的人原来的序号。要求用链表实现。

#include <stdio.h>
#define N 13

//定义节点
typedef struct people
{
    int num;  //num 是人数
    struct people* next;
}people;

int main()
{
    //定义包含十三个人的数据
    people arr[N];
    int i;


    //建立环状链表
    people* head = arr;
    for(i=0;i<N;i++)
    {
        head->num = i+1;
        head->next = &arr[i+1];
        head = head->next;
    }

    //构成环状结构
    arr[N-1].next = arr;

    //开始报数
    int count = N;
    i =1;
    head = arr;
    while(count >1)
    {
        //判断是否退出
        if(head->num == 0)
        {
            //跳过此人
            head = head->next;
            continue;
        }

        if(i==3)
        {
            //当前此人需要退出
            head->num = 0;
            count--;

        }

        //继续报号
        i++;
        head = head->next;
        if(i>3)
        {
            i=1;
        }

    }

    while(head->num == 0)
    {
        head = head->next;
        if(head->num != 0)
        {
            printf("最后剩下的是第 %d 号",head->num);
        }
    }

    return 0;
}
