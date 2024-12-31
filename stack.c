#include<stdio.h>
typedef struct{
int d;
struct node *prev;
struct node *next;

}node;
void insert(node **s,int item)
{node *n,*t;
n=(node*)malloc(sizeof(node));
n->d=item;
n->next=NULL;
n->prev=NULL;
if(*s==NULL)
    *s=n;
else{
    t=*s;
    while(1)
    {
        if(t->next==NULL)
        {n->prev=t;
            t->next=n;
            break;
        }
        else{
            t=t->next;
        }
    }
}

}
int main()
{
    node *s=NULL;
    insert(&s,40);
    insert(&s,50);
    printf("%d",s->d);
}
