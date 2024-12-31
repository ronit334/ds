#include<stdio.h>
typedef struct{
int item;
int pr;
node *next;

}node;

void ins(node **s,int data,int pr)
{node *n,*t,*v;
n=(node*)malloc(sizeof(node));
n->item=data;
n->pr=pr;
n->next=NULL;
    if(*s==NULL)
    {
        *s=n;
    }
    else if(n->pr>(*s)->pr)
    {
        n->next=*s;
        *s=n;
    }
    else{
        t=(*s)->next;
        v=*s;
        while(1)
        {
            if(t==NULL)
            {
                t=n;
                break;
            }
            else if(n->pr>t->pr)
            {
             n->next=t;
             v->next=n;
             break;
            }
            else{
                v=t;
                t=t->next;

            }
        }
    }
}
int main()
{node *s=NULL;
ins(&s,7,6);
ins(&s,5,8);
printf("%d",s->item);

}
