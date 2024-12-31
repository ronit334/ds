#include<stdio.h>
typedef struct{
int *p,rear,front,cap,*arr;


}node;

node* create(int a)
{
    node *s;
    s=(node*)malloc(sizeof(node));
    s->cap=a;
    s->arr=(int*)malloc(4*s->cap);
    s->p=(int*)malloc(4*s->cap);
    s->front=-1;
    s->rear=-1;
    return s;
}
void inse(node *a,int data,int pr)
{
    if(a->rear+1==a->cap)
    {
        printf("complete");
    }
    else if(a->rear==-1)
    {
    a->front++;
    a->rear++;
    a->p[a->rear]=data;
    a->arr[a->rear]=pr;
    }
    else{
        a->rear++;
        a->p[a->rear]=data;
        a->arr[a->rear]=pr;
    }
}
void del(node *a)
{int c=a->arr[0],i,v;
if(a->rear==a->front)
{
    a->front=-1;
    a->rear=-1;
}
else
    {for(i=0;i<=a->rear;i++)
    {
        if(c<a->arr[i])
        {
            c=a->arr[i];
            v=i;

        }
    }


    if(v==a->rear)
    {
        a->rear--;
    }
    else
    {
   for(i=v;i<a->rear;i++)
   {
       a->p[i]=a->p[i+1];
       a->arr[i]=a->arr[i+1];
   }
   a->rear--;}}




}
int main()
{
    node *a;
    int i,s,v;
    a=create(4);
   for(i=0;i<a->cap;i++)
{
    printf("enter");
    scanf("%d",&s);
    printf("pri");
    scanf("%d",&v);
    inse(a,s,v);
    printf("\n");
}
del(a);
for(i=0;i<=a->rear;i++)
    printf("%d ",a->p[i]);

}
