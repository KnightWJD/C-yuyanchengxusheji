//已有a,b两个链表,每个链表中的结点包括学号、成绩。
//要求把两个链表合并,按学号升序排列

#include <stdio.h>
#include <stdlib.h>
#define NUM 3

typedef struct student
{
    int num;
    double score;
    struct student* next;
}student;


student* creat()
{
    student* head =NULL;
    student* p =NULL ;

    int i,num;
    double score;
    printf("请输入%d个学号,成绩:\n",NUM);
    for(i=0;i<NUM;i++)
    {
        scanf("%d %lf",&num,&score);
        student* newnode = (student*)malloc(sizeof(student));
        newnode->num = num;
        newnode->score =score;
        newnode->next = NULL;

        if(head == NULL)
        {
            head=p=newnode;
        }
        else
        {
            p->next = newnode;
            p=p->next;
        }


    }
    return head;
}

void merge(student* a,student* b)
{
    student* p =a;
    while(p->next!=NULL)
    {
        p = p->next;
    }
    p->next = b;
    p=a;
    student* prev=p;
    student* cul;
    int num;
    double score;
    while(prev->next != NULL)
    {
        cul=prev->next;
        while(cul)
        {
            if(prev->num > cul->num)
            {
                num = prev->num;
                score= prev->score;
                prev->num = cul->num;
                prev->score = cul->score;
                cul->num = num;
                cul->score =score;
            }
            cul = cul->next;
        }
        prev = prev->next;
    }

}

void print(student* a)
{
    student* p =a;
    while(p!=NULL)
    {
        printf("%d , %.2lf\n",p->num,p->score);
        p=p->next;
    }
    printf("\n");
}

int main()
{
    student* a =creat();
    student* b =creat();
    print(a);
    print(b);
    merge(a,b);
    print(a);
    return 0;
}
