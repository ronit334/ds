#include<stdio.h>
struct node{
int *ptr;
int rear;
int front;
int cap;


};
struct node* createarray(int capacity)
{struct node *a;
a=(struct node*)malloc(sizeof(struct node));
a->cap=capacity;
a->front=-1;
a->rear=-1;
a->ptr=(int*)malloc(sizeof(int));
return a;
};
void insert(struct node *v,int d)
{
    if(v->rear==v->cap-1 && v->front==0)
        printf("overflow");
    else if(v->rear+1==v->front)
        printf("overflow");
    else if(v->rear==-1)
    {
        v->rear=0;
        v->front=0;
        v->ptr[v->rear]=d;
    }
    else if(v->rear+1==v->cap && v->front>0)
    {v->rear=0;
    v->ptr[v->rear]=d;
    }
    else{
        v->rear++;
        v->ptr[v->rear]=d;
    }
}
void del(struct node *a)
{
    if(a->front==-1)
        printf("underflow");
    else if(a->front==a->cap-1 && a->rear>=0)
    {
        a->front=0;
    }
    else if(a->front==a->rear)
        {a->front=-1;
        a->rear=-1;
            printf("no more old value inserted in an array");}
    else
        a->front++;
}
int main()
{int i;
    struct node *s;
    s=createarray(5);
    insert(s,8);

    del(s);




}

