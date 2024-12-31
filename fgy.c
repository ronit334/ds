#include<stdio.h>
int main()
{
    char *p;
    p=(char*)malloc(1*5);
    printf("enter");
    gets(*p);
    printf("%s",*p);


}
