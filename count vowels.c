#include<stdio.h>
#include<string.h>
int main()
{
    int a[20],v[5]={97,101,105,111,117},g,i,b=0,j;
    char s[20];
    printf("enter");
    gets(s);

    g=strlen(s);
    for(i=0;i<g;i++)
    {
        a[i]=s[i];
    }
    for(j=0;j<5;j++)
    {
        for(i=0;i<g;i++)
        {
            if(v[j]==a[i])
            {
                b=b+1;
            }
            else if(v[j]==a[i]+32)
            {
                b=b+1;
            }
            else if(v[j]==a[i]-32)
            {
                b=b+1;
            }
        }
    }
    if(b!=0)
    {
        printf("in this array the vowels is %d",b);

    }
    else{
        printf("there is no vowels");
    }

}
