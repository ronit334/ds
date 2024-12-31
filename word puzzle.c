#include<stdio.h>
int main()
{
    char a[5][5],s[10];
    int i,g,j,e=0,v;
    printf("");
    for(i=0;i<5;i++)
    scanf("%s",a[i]);
printf("enter");
scanf("%s",s);
v=strlen(s);
for(j=0;j<5;j++)
{g=0;

    for(i=0;i<5;i++)
    {
        if(a[j][i]==s[e])
            {e++;
            g=1;
           if(e==v)
           break;
              if(a[j+1][i]==s[e])
              {j++;
                  e++;
                  g=1;
           if(e==v)
            break;
              }
            }
    }
    if(e==v)
        break;
}
if(g==1)
    printf("1");
else{
    printf("-1");
}

}
