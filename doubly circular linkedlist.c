#include<stdio.h>
struct node{
struct node *prev;
int item;
struct node *next;

};
struct node* sear(struct node *s,int data)
{
    while(1)
    {
        if(s->item==data)
        {
            return s;
        }
        else{
            s=s->next;
        }
    }
};
void insertafter(struct node *t,int data)
{
    struct node *n,*v;
    n=(struct node*)malloc(sizeof(struct node));
    n->item=data;
    n->prev=t;
    n->next=t->next;
    v=t->next;
    v->prev=n;
    t->next=n;
}
void deleteatfirst(struct node **s)
{
    struct node *t;
    t=(*s)->next;
    *s=(*s)->prev;
    t->prev=*s;
    (*s)->next=t;
    *s=t;
}
void insertatfirst(struct node **s,int data)
{
    struct node *n,*t;
    n=(struct node*)malloc(sizeof(struct node));
    n->item=data;
    if(*s==NULL)
    {*s=n;
    (*s)->next=*s;
    (*s)->prev=*s;

    }
    else{
        n->next=*s;
        n->prev=(*s)->prev;
        (*s)->prev=n;
        *s=n;
        t=(*s)->prev;
        t->next=*s;
    }
}
void insertatlast(struct node **s,int data)
{
    struct node *n,*t;
    n=(struct node*)malloc(sizeof(struct node));
    n->item=data;
    if(*s==NULL)
    {       *s=n;
    (*s)->next=*s;
    (*s)->prev=*s;

    }
    else{
        t=*s;
        while(1)
        {
            if(t->next==*s)
            {
               n->prev=t;
               n->next=*s;
               t->next=n;
               (*s)->prev=n;
               break;
            }
            else{
                t=t->next;
            }

        }
    }
}
void deleteatlast(struct node **s)
{
    struct node *t;
    t=(*s)->prev;
    t=t->prev;
    t->next=*s;
    (*s)->prev=t;
}
void reverse(struct node **s)
{
    struct node *t,*v,*start;
    start=*s;
    t=(*s)->prev;
    while(1)
    {
        v=start->next;
        start->next=t;
        t=start;
        start->prev=v;
        if(*s==start->prev)
        {
            break;
        }
        start=v;
    }
    *s=start;
}

int main()
{
    struct node *start=NULL,*t,*v;
    insertatlast(&start,67);
    insertatlast(&start,78);
    insertatfirst(&start,23);
    insertatlast(&start,34);
    insertatfirst(&start,15);
    v=sear(start,78);
    insertafter(v,59);
    deleteatfirst(&start);
    deleteatfirst(&start);
    deleteatlast(&start);
    deleteatlast(&start);
    sear(start,67);
    insertafter(start,10);
    reverse(&start);
 t=start;
 while(1)
 {
     printf("%d",t->item);
     t=t->next;
     if(t==start)
     {
         break;
     }
 }



}
