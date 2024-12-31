#include<stdio.h>
struct node{
int item;
struct node *next;

};
void stack(struct node **s,struct node **v,int data)
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    n->item=data;
    n->next=NULL;
    if(*s==NULL)
    {
        *s=n;
        *v=n;
    }
    else{
        (*v)->next=n;
        *v=(*v)->next;
    }
}
int main()
{
    struct node *s=NULL,*v=NULL;
    stack(&s,&v,5);
    stack(&s,&v,6);
    printf("%d %d",s->item,v->item);
}
