#include<stdio.h>
struct node{
int d;
struct node *next;


};
void insert(struct node **s,int a)
{
    struct node *n,*t;
    n=(struct node*)malloc(sizeof(struct node));
    n->d=a;
    n->next=NULL;
    if(*s==NULL)
    {
        *s=n;
        (*s)->next=n;
    }
    else{
        t=(*s)->next;
         n->next=t;
        (*s)->next=n;



    }
}
int main()
{
    struct node *s=NULL;
    insert(&s,6);
    insert(&s,5);
    s=s->next;
    s=s->next;
    printf("%d",s->d);

}
