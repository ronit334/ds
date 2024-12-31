#include<stdio.h>
void trim(char * str) {
  char *q;
  int i,j,e=0,v=0;
  for(i=0;str[i]!=NULL;i++)
  {

  }
i--;
printf("%d",i);
  q=(char*)malloc(i);
  for(j=0;j<i;j++)
  {if(str[j]==32)
  {v++;

  }
  else{
    v=0;
  }
 if(v<2)
 {
     q[e]=str[j];
     e++;
 }
  }

  str=q;
  for(j=0;j<e;j++)
    printf("%c",str[j]);



}
int main()
{int i,j;
    char *p,s[200];

  printf("enter");
  gets(s);
i=strlen(s);

p=(char*)malloc(i+1);
for(j=0;j<i;j++)
    p[j]=s[j];

printf("%d",i);

trim(p);

}
