#include<stdio.h>
int main()
{int i,g=0,j,v=0;
    char s[100];
    printf("");
    gets(s);
for(i=0;s[i];i++)
{

}

if(s[i-1]=='.' || s[i-1]=='?')
{printf("2");
    g=1;
}
if(g==1)
{printf("3");
    for(j=0;j<i-1;j++)
        if(s[j]=='.' || s[j]=='?')
    {
        if(s[j+1]==32)
        {
            g=1;
        }
        else{
            g=0;
        }
    }
}
if(g==1)
{printf("4");
    if(s[0]>=65 && s[0]<=90)
    {
        g=1;
    }
    else{
        g=0;
    }
}
if(g==1)
{
    for(j=0;j<i;j++)
    {
        if(s[j]==39)
        {g=0;

          for(v=j+1;s[v]!=32;v++)
          {
              if(s[v]==39)
              {
                 g=1;
                 break;
              }
          }

    }
   if(v>0)
   break;

    }
if(j==i)
    g=0;
}
if(g==1)
    printf("1");
else{
    printf("0");
}

}
