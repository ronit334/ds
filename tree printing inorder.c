#include<stdio.h>
struct node{
int item;
struct node *left;
struct node *right;


};
void insert(struct node **s,int a)
{
    struct node *n,*t;
    n=(struct node*)malloc(sizeof(struct node));
    n->item=a;
    n->left=NULL;
    n->right=NULL;
    if(*s==NULL)
        *s=n;
    else{
        t=*s;
        while(1)
        {
         if(t->item > n->item)
        {
            t=t->left;
            if(t==NULL)
                {t=n;
                break;}
        }
        else{
            t=t->right;
            if(t==NULL)
            {
                t=n;
                break;
            }
        }}

    }
}
int main()
{


    struct node *s=NULL;
    insert(&s,5);
    insert(&s,4);
    s=s->left;

    printf("%d",s->item);



}
