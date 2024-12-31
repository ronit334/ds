#include<stdio.h>
#include<stdlib.h>
struct node{
int item;
struct node *next;


};
void delpart(struct node **s)
{
    struct node *t,*v;
    t=*s;
    v=t->next;
    v->item=8;

}



void insert(struct node **s,int data)
{
    struct node *n,*t;
    n=(struct node*)malloc(sizeof(struct node));
    n->item=data;
    n->next=NULL;
    if(*s==NULL)
    {
        *s=n;
    }
    else{
        n->next=*s;
        *s=n;
    }

}
void insert_at_last(struct node **s,int data)
{
    struct node *n,*t;
    n=(struct node*)malloc(sizeof(struct node));
    n->item=data;

    n->next=NULL;
    if(*s==NULL)
    {
        *s=n;

    }
    else{
        t=*s;

        while(1)
        {
            if(t->next==NULL)
            {
              t->next=n;


              break;
            }
            else{
                t=t->next;
            }
        }
    }
}
void del(struct node **start)
{
    struct node *s,*v;
    s=*start;


     s->item=9;



}
int main()
{
    struct node *start=NULL,*t=NULL;


insert(&start,45);

insert_at_last(&start,89);
insert(&start,76);



del(&start);
 printf("%d",start->item);










}
