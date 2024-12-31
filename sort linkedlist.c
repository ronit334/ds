#include<stdio.h>
struct node
{
  int d;
  struct node * next;
};
void sort(struct node * list)
{
  struct node *t,*v,*g;
  int s;
  g=list;
  t=list;
  v=list->next;
  while(1)
  {
      while(1)
      {
          if(t->d>=v->d)
          {
              s=t->d;
              t->d=v->d;
              v->d=s;
              t=t->next;
              v=v->next;
              if(v==NULL)
              {
                  break;
              }
          }
          else{
            t=t->next;
            v=v->next;
            if(v==NULL)
                break;
          }
      }
      t=list;
      v=list->next;
      g=g->next;
      if(g==NULL)
        break;
  }
  while(1)
  {
      printf("%d ",list->d);
      list=list->next;
      if(list==NULL)
        break;
  }

  }
int main()
{struct node *start=NULL,*n,*t;
int g,i,s;
     printf("enter");
    scanf("%d",&g);
    printf("enter");
    for(i=1;i<=g;i++)
    {
        scanf("%d",&s);
        n=(struct node*)malloc(sizeof(struct node));
        n->d=s;
        n->next=NULL;
        if(start==NULL)
        {
            start=n;
            t=n;
        }
        else{
            t->next=n;
            t=t->next;
        }
    }
    sort(start);
}
