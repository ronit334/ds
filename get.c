#include<stdio.h>
int main()
{
    char *p,*q,ch;
    int n=1,i;
    p=(char*)malloc(n);
    while(1)
    {
        ch=getche();
        if(ch==13)
        {

            break;
        }
        p[n-1]=ch;
        n++;
        q=(char*)malloc(n);
        for(i=0;i<n-1;i++)
        {
            q[i]=p[i];
        }
        q[n-1]=0;
        free(p);
        p=(char*)malloc(n);
        for(i=0;i<n;i++)
            p[i]=q[i];
            free(q);

    }
}
