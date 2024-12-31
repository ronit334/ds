#include<stdio.h>
#include<string.h>
struct node{
int d;
struct node *next;
struct node *prev;


};
int main()
{
    struct node *v=NULL,*t,*n;
    char s[100];
    int i,b=0,f;
    printf("");
    gets(s);
    for(i=0;s[i];i++)
    {
        if(s[i]>=48 && s[i]<=57)
            {if(s[i]==48)
            break;
                n=(struct node*)malloc(sizeof(struct node));
                n->d=s[i];
                n->next=NULL;
                n->prev=NULL;
                if(v==NULL)
                {
                    v=n;

                }
                else{
                    t=n;
                    v->next=t;
                    t->prev=v;
                    v=v->next;
                }
            }

    }
    while(1)
    {
        printf("%c ",t->d);
        if(t->prev==NULL)
            break;
        t=t->prev;

    }
    printf("\n");
    while(1)
    {f=t->d-48;

        b=b+f;
        t=t->next;
        if(t==NULL)
            break;
    }
    printf("%d",b);
}
