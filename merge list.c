#include<stdio.h>
#include<conio.h>
struct node
{
  char d;
  struct node *next;
};

struct node* merge(struct node *name, struct node *middlename)
{struct node *t,*n,*v,*l;
l=(struct node*)malloc(sizeof(struct node));
t=name;
while(1)
{
    if(t->d==32)
    {
        n=t->next;


             break;
    }
    else{
        t=t->next;
    }
}
v=middlename;
while(1)
{
    if(v->next==NULL)
    {l->d=32;
    l->next=n;
        v->next=l;
        break;
    }
    else{
        v=v->next;
    }
}

t->next=middlename;

return name;
}
int main()
{
    struct node *n,*t,*s=NULL,*v=NULL,*w;
    char g,i;
    while(1)
        {g=getche();
        if(g==13)
        {
            break;
        }
    n=(struct node*)malloc(sizeof(struct node));
    n->d=g;
    n->next=NULL;
    if(s==NULL)
    {s=n;

    }
    else{
        t=s;
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
    }}
    printf("\n");
    while(1)
        {g=getche();
        if(g==13)
        {
            break;
        }
    n=(struct node*)malloc(sizeof(struct node));
    n->d=g;
    n->next=NULL;
    if(v==NULL)
    {v=n;

    }
    else{
        t=v;
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
    }}
    printf("\n");
w=merge(s,v);
while(1)
{printf("%c",w->d);
w=w->next;
if(w==NULL)
{
    break;
}}
}




