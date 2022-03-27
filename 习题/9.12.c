//建立一个链表,每个结点包括:学号、姓名、性别、年龄。
//输人一个年龄，如果链表中的结点所包含的年龄等于此年龄,则将此结点删去。


#include <stdio.h>
#include <stdlib.h>
#define n 3
typedef struct stu
{
    int num;
    char name[10];
    char sex[10];
    int age;
    struct stu* next;
}stu;

stu* create()
{
    stu* head = (stu*)malloc(sizeof(stu));
    head->age=0;
    head->next;
    stu* tail = head;

    int i;
    for(i=0;i<n;i++)
    {
        stu* newnode = (stu*)malloc(sizeof(stu));
        printf("请输入%d个学生的学号、姓名、性别、年龄:\n",i+1);
        scanf("%d %s %s %d",&newnode->num,&newnode->name,&newnode->sex,&newnode->age);
        newnode->next = NULL;

        tail->next = newnode;
        tail = tail->next;
    }
    return head;
}

void del(stu* head)
{
    stu* p = head->next;
    stu* prev=head;
    int k;
    printf("请输入一个要删除的年龄:\n");
    scanf("%d",&k);

    while(p)
    {
        if(p->age==k)
        {
            prev->next = p->next;
            free(p);
            p=prev->next;
        }
        else
        {
            prev = p;
            p = p->next;
        }
    }

}

void print(stu* head)
{
    stu* p = head->next;
    while(p)
    {
        printf("%d %s %s %d\n",p->num,p->name,p->sex,p->age);
        p=p->next;
    }
    printf("\n");
}

int main()
{
    stu* head = create();
    printf("当前链表的数据为:\n");
    print(head);
    del(head);
    printf("删除后的链表的数据为:\n");
    print(head);
    return 0;
}
