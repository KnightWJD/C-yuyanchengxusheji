//有两个链表a,b,设节点中包括学号,姓名
//从a链表删去与b链表中有相同学号的那些节点

#include <stdio.h>
#include <stdlib.h>
#define N 3
typedef struct stu
{
    int num;
    char name[32];
    struct stu* next;
}stu;

stu* create()
{
    stu* head=(stu*)malloc(sizeof(stu));
    head->num = 0;
    head->next =NULL;
    stu* tail=head;

    int i;
    for(i=0;i<N;i++)
    {
        printf("请输入第%d个同学的学号和姓名:",i+1);
        stu* newnode = (stu*)malloc(sizeof(stu));

        scanf("%d %s",&newnode->num,&newnode->name);
        newnode->next =NULL;



        tail->next = newnode;
        tail = tail->next;

    }
    return head;
}

void compare(stu* a,stu* b)
{
    stu* pa =a->next;
    stu* pb =b->next;
    stu* preva=a;
    while(pa)
    {
        pb = b->next;
        while(pb)
        {

            if(pa->num ==pb->num)
            {
                preva->next = pa->next;

                free(pa);

                pa =preva->next;
            }
            else
            {
                pb = pb->next;
            }
        }
        preva = pa;
        pa = pa->next;

    }
}

void print(stu* a)
{
    stu* p = a->next;
    while(p!=NULL)
    {
        printf("%d %s\n",p->num,p->name);
        p=p->next;
    }
}

int main()
{
    stu* a = create();
    stu* b = create();
    compare(a,b);
    print(a);
    printf("\n");
    print(b);
    return 0;
}
