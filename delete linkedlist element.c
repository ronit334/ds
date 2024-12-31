
#include<stdio.h>
struct node{
int d;
struct node *next;

};

struct node* del(struct node *list,int *arr,int n)
{
    int j;
    struct node *t,*v;
    t=list->next;
    v=list;
    for(j=0;j<n;j++)
    {
    while(t!=NULL)
    {
        if(arr[j]==list->d)
        {
            list=list->next;
            v=list;
            t=list->next;
            break;
        }
        else if(arr[j]==t->d)
        {
            v->next=t->next;
            break;
        }
        else{
            v=t;
            t=t->next;
        }
    }
     t=list->next;
    }
    return list;
}
int main()
{
    struct node *a=NULL,*n,*t,*k;
    int f,c,i,*g,h;
    printf("enter");
    scanf("%d",&f);


        printf("enter");
    for(i=1;i<=f;i++)
    {
        scanf("%d",&c);
        n=(struct node*)malloc(sizeof(struct node));
        n->d=c;
        n->next=NULL;
        if(a==NULL)
        {
            a=n;
        }
        else{
            t=a;
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

    printf("enter size");
    scanf("%d",&h);
    g=(int*)malloc(4*h);
    printf("enter");
    for(i=0;i<h;i++)
        scanf("%d",&g[i]);
        k=del(a,g,h);
        while(1)
        {printf("%d",k->d);
        k=k->next;
        if(k==NULL)
            {
                break;
            }
        }
}
