#include<stdio.h>
struct node{
int d;
struct node *next;

};
void insert(struct node **s,int data)
{
    struct node *t,*n;
    n=(struct node*)malloc(sizeof(struct node));
    n->d=data;
    n->next=NULL;
  if(*s==NULL)
  {
      n->next=n;
      *s=n;
  }
  else
  {
      t=*s;

      while(1)
      {
          if(t->next==*s)
          {n->next=t->next;
              t->next=n;
              break;
          }
          else{
            t=t->next;
          }
      }
  }


}
void deleteatfirst(struct node **s)
{struct node *t;
    if((*s)->next==*s)
        printf("list not found");
    else{
        t=(*s)->next;
        (*s)->next=t->next;
        free(t);
    }
}
int main()
{
    struct node *last=NULL,*t;
    insert(&last,89);
    insert(&last,12);
    insert(&last,2);
    insert(&last,5);
    insert(&last,7);
    insert(&last,8);


}
