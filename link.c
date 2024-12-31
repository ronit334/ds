#include<stdio.h>
struct node{
int d;
struct node *next};
void find(struct node *list,int k)
{
    int v,c=0,i,j;

    struct node *t;


    t=list;
    while(t!=NULL)
    {
        if(t->d>=c)
        {
            c=t->d;
            t=t->next;
        }
        else{
            t=t->next;
        }

    }
    v=c;


    c=list->d;

    for(j=1;j<=k-1;j++)
    {t=list;
        while(1)
        {if(t==NULL)
        {
            break;
        }
            if(t->d<v)
            {printf("%d",c);
                if(t->d>=c)
                {
                    c=t->d;
                    t=t->next;

                }
                else{
                    t=t->next;
                }
            }
            else{
                t=t->next;
            }
        }

       v=c;
       c=list->d;

    }
printf("%d",v);
}
int main()
{
    struct node *a=NULL,*n,*t;
    int f,c,i,k;
    printf("enter");
    scanf("%d",&f);
    printf("enter");
    scanf("%d",&k);

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
    find(a,k);


}
