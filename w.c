#include<stdio.h>
int main()
{
    int a[30],n,i;
    printf("enter");
    scanf("%d",&n);
    printf("enter");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
            printf("%d",a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
            printf("%d",a[i]);
    }
}
