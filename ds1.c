#include<stdio.h>
struct dynaarray{
int capacity;
int lastindex;
int *ptr;

};
void moresize(struct dynaarray *p,int index,int data)
{
    int *q,i;
    p->capacity=p->capacity*2;
    q=(int*)malloc(4*p->capacity);
    for(i=0;i<=p->lastindex;i++)
    {
        q[i]=p->ptr[i];
    }
    free(p->ptr);
    p->ptr=q;
    free(q);

    insert(p,index,data);

}
struct dynaarray* createarray(int cap)
{
    struct dynaarray *p;
    p=(struct dynaarray*)malloc(12);
    p->capacity=cap;
    p->lastindex=-1;
    p->ptr=(int*)malloc(4*p->capacity);
    return p;
};
void insert(struct dynaarray *q,int index,int data)
{int i,c,t;
    if(q->lastindex+1==q->capacity)
    {
        moresize(q,index,data);
    }
    else if(index<=q->lastindex || index==q->lastindex+1)
    {c=q->ptr[index];
    for(i=index;i<=q->lastindex;i++)
    {
        t=q->ptr[i+1];
        q->ptr[i+1]=c;
        c=t;
    }
    q->ptr[index]=data;
    q->lastindex++;

    }
    else{
        printf("invalid index");
    }
}
int main()
{struct dynaarray *a;
int i,k=0;

a=createarray(1);
insert(a,0,4);
k++;
insert(a,0,5);
k++;



insert(a,1,7);
k++;
for(i=0;i<k;i++)
    printf("%d ",a->ptr[i]);

    }
