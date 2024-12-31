#include<stdio.h>
struct node
{
  int d;
  struct node * next;
};
void removeduplicate(struct node *list)
{struct node *t,*v,*s;


   t=list;
   v=list->next;
   s=list;
while(1)
{while(1)
{
    if(t->d==v->d)
    {
        s->next=v->next;

        v=v->next;

    }
    else{
         s=v;
        v=v->next;
    if(v==NULL)
        break;
    }
}
t=t->next;
if(t->next==NULL)
    break;
s=t;
v=t->next;}


while(1)
    {
        printf("%d ",list->d);
        list=list->next;
        if(list==NULL)
            break;
    }
}
int main()
{
    struct node *start=NULL,*t,*n;
    int i,g,s;
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
    removeduplicate(start);

}
