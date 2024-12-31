#include<stdio.h>
struct node{
int d;
struct node *next;
};
void create(struct node **s,int a)
{
    struct node *n,*t;
    int g,i;
    for(i=1;i<=a;i++)
        {printf("");
    scanf("%d",&g);
    n=(struct node*)malloc(sizeof(struct node));
    n->d=g;
    n->next=NULL;
    if(*s==NULL)
    {*s=n;

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
}}
void reve(struct node **list,int n)
{
    struct node *t=NULL,*v,*start;
    start=*list;
    while(1)
    {v=start->next;
    start->next=t;
    t=start;
    if(v==NULL)
        break;
    start=v;

    }
    *list=start;
}
int main()
{struct node *start=NULL,*t;
    int n,a[10],i;
    printf("");
    scanf("%d",&n);
    create(&start,n);
    reve(&start,n);
     t=start;
     while(t!=NULL)
     {
         printf("%d",t->d);
         t=t->next;
     }
}
