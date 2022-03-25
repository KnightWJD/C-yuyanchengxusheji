//写一个函数 Insert ,用来向一个动态链表插入节点

#include <stdio.h>
#include <stdlib.h>

#define n 10

typedef struct node
{
    int num;
    struct node* next;
}node;

node* create()
{
    node* head = (node*)malloc(sizeof(node));
    head->num=0;
    head->next = NULL;

    node* p =head;

    int i;
    for(i=1;i<=n;i++)
    {
        node* newnode = (node*)malloc(sizeof(node));
        newnode->num=i;
        newnode->next =NULL;

        p->next = newnode;
        p=p->next;
    }
    return head;
}

void print(node* head)
{
    node* p =head->next;
    while(p != NULL)
    {
        printf("%d ",p->num);
        p=p->next;
    }
    printf("\n");
}

void insert(node* head,int val,int k)
{
    node* newnode =(node*)malloc(sizeof(node));
    node* p0 = head->next;
    int i;
    for(i=0;i<val-2;i++)
    {
        p0=p0->next;
    }
    newnode->num = k;
    newnode->next = p0->next;
    p0->next = newnode;
}

int main()
{
    node* head = create();
    print(head);
    int val,k;
    scanf("%d%d",&val,&k);
    insert(head,val,k);
    print(head);
    return 0;
}
