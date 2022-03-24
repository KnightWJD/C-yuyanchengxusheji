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
    head->num = 0;
    head->next=NULL;

    node* p = head;

    int i;
    for(i=1;i<=n;i++)
    {
        node* newnode = (node*)malloc(sizeof(node));
        newnode->num = i;
        newnode->next = NULL;

        p->next = newnode;
        p = p->next;
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

void del(node* head,int val)
{
    node* pre = head;
    node* p = head->next;

    while(p!= NULL)
    {
        if(p->num == val)
        {
            pre->next= p->next;
            free(p);
            break;
        }
        else
        {
            pre = p;
            p = p->next;

        }
    }
}

int main()
{
    int val;
    node* head = create();
    scanf("%d",&val);
    print(head);
    del(head,val);
    print(head);
    return 0;
}
