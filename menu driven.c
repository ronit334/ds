#include<stdio.h>
struct dy{
int capacity;
int lastindex;
int *ptr;


};
struct dy* createarray(int cap)
{
    struct dy *p;
    p=(struct dy*)malloc(12);
    p->capacity=cap;
    p->lastindex=-1;
    p->ptr=(int*)malloc(4*p->capacity);
    return p;
}
void moresize(struct dy *p)
{int *s,i;
    p->capacity=p->capacity*2;
    s=(int*)malloc(4*p->capacity);
    for(i=0;i<=p->lastindex;i++)
    {
        s[i]=p->ptr[i];
    }
    free(p->ptr);
    p->ptr=s;
    free(s);

}
void insert(struct dy *q,int index,int data)
{int c,t,i;
    if(q->lastindex+1==q->capacity)
    {
        moresize(q);
        insert(q,index,data);
    }
    else if(index<=q->lastindex || index==q->lastindex+1)
    {
        c=q->ptr[index];
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
void append(struct dy *a,int data)
{
    if(a->lastindex+1==a->capacity)
    {
        moresize(a);
        append(a,data);
    }
    else{
        a->ptr[a->lastindex+1]=data;
        a->lastindex++;
    }
}
void count_items(struct dy *y)
{
    printf("%d",y->lastindex+1);
}
void getitem(struct dy *a,int index)
{int c;
    if(index>a->lastindex || index<0 )
    {printf("invalid");

    }
    else{
       c=a->ptr[index];
       printf("%d",c);
    }
}
void showresult(struct dy *s)
{
    int i;
    for(i=0;i<=s->lastindex;i++)
    {
        printf("%d ",s->ptr[i]);
    }
}
void deletearray(struct dy *p,int index)
{int i;
    if(index<0 || index>p->lastindex)
    {
        printf("invalid");
    }
    else{
        for(i=index;i<p->lastindex;i++)
        {
            p->ptr[i]=p->ptr[i+1];
        }
        p->lastindex--;
        if(p->lastindex+1==p->capacity/2)
        {
            sizecut(p);
        }
    }
}
void sizecut(struct dy *q)
{
    int *p,i;
    q->capacity=q->capacity/2;
    p=(int*)malloc(4*q->capacity);
    for(i=0;i<=q->lastindex;i++)
    {
        p[i]=q->ptr[i];
    }
    free(q->ptr);
    q->ptr=p;
    free(p);

}
void capacity(struct dy *s)
{
    printf("%d",s->capacity);
}

int main()
{struct dy *a;
int s,d,c;
a=createarray(5);
while(1)
{printf("enter");
scanf("%d",&s);
if(s==1)
{
    printf("enter index");
    scanf("%d",&d);
    printf("enter data");
    scanf("%d",&c);
    insert(a,d,c);
}
else if(s==2)
{
    printf("enter data");
    scanf("%d",&d);
    append(a,d);
}
else if(s==3)
{
    showresult(a);
}
else if(s==4)
{
    count_items(a);
}
else if(s==5)
{printf("enter index");
scanf("%d",&d);
    getitem(a,d);
}
else if(s==6)
{printf("enter index");
scanf("%d",&d);
    deletearray(a,d);
}
else if(s==7)
{
    capacity(a);
}
else{
    break;
}
printf("\n");}

}
