#include<stdio.h>
struct node{
int data;
struct node *left;
struct node *right;


};
void insert(struct node **s,int d)
{
    struct node *n,*t;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=d;
    n->left=NULL;
    n->right=NULL;
    if(*s==NULL)
        *s=n;
    else{
        t=*s;
        while(1)
        {if(t==NULL)
        {
            t=n;
            break;
        }
        else if(t->data>=n->data)
        {
            t=t->left;
        }
        else{
            t=t->right;
        }}
    }
}
int main()
{struct node *s=NULL;
insert(&s,5);
printf("%d",s->data);
insert(&s,6);
s=s->right;
printf("%d",s->data);
insert(&s,3);
s=s->left;
printf("%d",s->data);

}
