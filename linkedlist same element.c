#include<stdio.h>
struct node
{
  int d;
  struct node * next;
};

void search(struct node * list1, struct node * list2)
{struct node *t,*v;
int i;
t=list1;
v=list2;
while(1)
{i=0;
    while(1)
    {
        if(t->d==v->d)
        {
            i=1;
            v->d=0;
            break;
        }
        else{
            v=v->next;
            if(v==NULL)
                break;
        }

    }
    if(i==0)
    {
        printf("0");
        break;
    }
    t=t->next;
    if(t==NULL)
        break;
    v=list2;
}
if(i==1)
{
    printf("1");
}




}
int main()
{struct node *list1=NULL,*list2=NULL,*n,*t;
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
        if(list1==NULL)
        {
            list1=n;
            t=n;
        }
        else{
            t->next=n;
            t=t->next;
        }
    }
    printf("enter");
    for(i=1;i<=g;i++)
    {
        scanf("%d",&s);
        n=(struct node*)malloc(sizeof(struct node));
        n->d=s;
        n->next=NULL;
        if(list2==NULL)
        {
            list2=n;
            t=n;
        }
        else{
            t->next=n;
            t=t->next;
        }
    }
    search(list1,list2);

}
