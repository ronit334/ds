#include<stdio.h>
void insert(int a[],int v,int *c)
{a[*c]=v;

(*c)++;
}
int main()
{
    int a[10],c=0;
    insert(a,5,&c);
    insert(a,6,&c);
    insert(a,10,&c);
    insert(a,3,&c);
    c=(2*1)+1;
printf("%d",a[c]);

}
