#include<stdio.h>
#include<string.h>
int main()
{
    int a[100],l[100],i,j,e=0,b=0,v,g,w,p,m=0,c;
    char s[100];
    printf("");
    gets(s);
    v=strlen(s);
    for(i=0;i<v;i++)
    {
        a[i]=s[i];
    }
    i=0;
    while(1)
    {if(p==v)
    {
        break;
    }

b=0;
    while(i<v)
    {
        if(a[i]!=32)
        {
            b=b+a[i];
            i++;

        }
        else{
            i++;
            break;

        }}
        p=i;

        l[e]=b;
        e++;
        m=m+1;}

c=l[0];
for(i=0;i<m;i++)
{
    if(c>=l[i])
    {
        c=l[i];
    }
}
i=0;
b=0;
while(1)
{g=i;
b=0;
while(i<v)
{
    if(a[i]!=32)
    {
        b=b+a[i];
        w=i;
        i++;
    }
    else{
        i++;
        break;
    }}

if(c==b)
{
while(g<=w)
{printf("%c",a[g]);
g++;}
    break;
}

}


printf("\n");

c=l[0];
for(i=0;i<m;i++)
{
    if(c<=l[i])
    {
        c=l[i];
    }
}
i=0;
b=0;
while(1)
{g=i;
b=0;
while(i<v)
{
    if(a[i]!=32)
    {
        b=b+a[i];
        w=i;
        i++;
    }
    else{
        i++;
        break;
    }}

if(c==b)
{
while(g<=w)
{printf("%c",a[g]);
g++;}
    break;
}

}

for(i=0;i<m;i++)
    printf("\n%d",l[i]);
}
