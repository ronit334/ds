#include<stdio.h>
struct node{
int item;
struct node *next;


};
void insertatfirst(struct node **last,int data)
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    if(*last==NULL)
    {
  *last=n;
  (*last)->item=data;
  (*last)->next=*last;
    }
    else{
        n->item=data;
        n->next=(*last)->next;
        (*last)->next=n;
    }
}
void insertatlast(struct node **last,int data)
{struct node *n;
n=(struct node*)malloc(sizeof(struct node));
if(*last==NULL)
{
    *last=n;
    (*last)->item=data;
    (*last)->next=*last;
}
else
{n->item=data;
n->next=(*last)->next;
(*last)->next=n;
*last=n;}

}
void deleteatlast(struct node **last)
{struct node *t;
t=*last;
while(1)
{
    if(t->next==*last)
    {


        t->next=(*last)->next;
        *last=t;
        break;
    }
    else{
        t=t->next;
    }
}

}
int main()
{
    struct node *last=NULL,*t,*i;
    insertatlast(&last,54);
    insertatlast(&last,78);
    insertatlast(&last,69);
    insertatfirst(&last,34);
 deleteatlast(&last);
t=last->next;
while(1)
    {printf("%d",t->item);
          t=t->next;
          if(t==last->next)
          {
              break;
          }}




}
