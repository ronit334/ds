#include<stdio.h>
typedef struct{
int *p,s;
int cap;
int lastindex;

}arr;
arr* creat(int n)
{
    arr *c;
    c=(arr*)malloc(sizeof(arr));
    c->cap=n;
    c->lastindex=-1;
    c->p=(int*)malloc(4*n);
    c->s=c->cap;
    return c;
}
void f1(arr *a,int data,int pos)
{

    if(pos==1)
{if(a->lastindex+1==a->s)
{
    printf("full");
}
else
    {a->lastindex++;
    a->p[a->lastindex]=data;}
}
else{
        if(a->s-1==a->lastindex)
        {
            printf("full");
        }
        else
    {a->s--;
    a->p[a->s]=data;}
}

}
int main()
{
    arr *k;
    int i;
    k=creat(5);
    f1(k,4,1);
    f1(k,6,1);
    f1(k,3,2);
    f1(k,7,2);
    f1(k,8,2);
    f1(k,5,2);
    for(i=0;i<5;i++)
    printf("%d",k->p[i]);
}
