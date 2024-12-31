#include<stdio.h>
struct node{
struct node *prev;
int item;
struct node *next;
};

void rev(struct node **s)
    {struct node *v,*t=NULL,*start;
    start=*s;
while(start!=NULL)
    {v=start->next;
    start->prev=v;
    start->next=t;
    t=start;
    start=v;}
    *s=t;
}
void insertatlast(struct node **s,int data)
{
    struct node *n,*t;
    n=(struct node*)malloc(sizeof(struct node));
    n->prev=NULL;
    n->item=data;
    n->next=NULL;
    if(*s==NULL)
    {
        *s=n;
    }
    else{
        t=*s;
        while(1)
        {if(t->next==NULL)
        {
            n->prev=t;
            t->next=n;
          break;

        }
        else{
            t=t->next;
        }}
    }
}
void insertatfirst(struct node **s,int data)
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    n->item=data;
    n->next=NULL;
    n->prev=NULL;
    if(*s==NULL)
    {
        *s=n;
    }
    else{
        n->next=*s;
        (*s)->prev=n;
        *s=n;
    }

}
void sort(struct node **s)
{
struct node *start,*v,*f=NULL,*o,*t,*l;
int i;

l=*s;

while(1)
{i=0;
start=l;
t=start->next;
    while(t!=NULL)
    {
    if(start->item >= t->item)
    {
       o=start;
       v=t->next;
       start=t;
       t=o;
       start->next=t;
       start->prev=f;
       t->prev=start;
       t->next=v;
       i=1;
    }
    f=start;
    start=t;
    t=t->next;
    }
    if(i==0)
    {
        break;
    }
}

}

struct node* sea(struct node *start,int data)
{
    while(1)
    {
        if(start->item==data)
        {
            return start;

        }
        else{
            start=start->next;
        }

    }
    return NULL;

};
void insertpart(struct node *s,int data)
{
    struct node *n,*t;
    n=(struct node*)malloc(sizeof(struct node));
    n->item=data;
    n->next=NULL;
    n->prev=NULL;
    if(s->next==NULL)
    {
        n->prev=s;
        s->next=n;
    }
    else{
        t=s;
        n->next=t->next;
        n->prev=t;
        t->next=n;
    }

}

int main()
{struct node *start=NULL,*t=NULL,*l;

insertatfirst(&start,76);
insertatfirst(&start,89);
insertatfirst(&start,34);
insertatfirst(&start,15);
insertatfirst(&start,65);
rev(&start);
t=start;
while(t!=NULL)
{
    printf("%d",t->item);
    t=t->next;
}









}
