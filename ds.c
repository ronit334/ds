#include<stdio.h>
struct arrayadt{

int capacity;
int lastindex;
int *ptr;


};
struct arrayadt* createarray(int cap)
{
    struct arrayadt *p;
    p=(struct arrayadt*)malloc(12);
    p->capacity=cap;
    p->lastindex=-1;
    p->ptr=(int*)malloc(4*p->capacity);
    return p;
};
void insert(struct arrayadt *p,int index,int data)
{int c,t,i;
    if(p->lastindex+1==p->capacity)
    {
        printf("overflow");
    }

    else if(p->lastindex+1==index || index<=p->lastindex)
    {c=p->ptr[index];
    for(i=index;i<=p->lastindex;i++)
    {
        t=p->ptr[index+1];
        p->ptr[index+1]=c;
        c=t;
    }
    p->ptr[index]=data;
    p->lastindex++;

    }
}



int main()
{struct arrayadt *a;
int i;
a=createarray(5);
insert(a,0,6);
insert(a,1,9);
insert(a,2,12);
insert(a,3,13);
insert(a,4,7);
insert(a,5,8);
for(i=0;i<=a->lastindex;i++)
    printf("%d\n",a->ptr[i]);


}
