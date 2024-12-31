#include<stdio.h>
void array(int a[],int size)
{
    int c,b,i;

    c=a[0];
    for(i=0;i<size;i++)
    {if(i==size-1)
    {
        a[0]=c;
    }
        else{
        b=a[i+1];
        a[i+1]=c;
        c=b;}
    }
    for(i=0;i<size;i++)
        printf("%d ",a[i]);
}
int main()
{int n,a[12],i;
printf("enter");
scanf("%d",&n);
printf("enter");
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
array(a,n);

}
