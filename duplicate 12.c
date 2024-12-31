void hailstone(int a) //Remove blank spaces and write valid return type and argument there.
{
    if(a%2!=0)  //Remove blank spaces and write valid test condition there.
    {
        printf("%d ",a);
      a=a*3;
      a=a+1;
    }
    else
    {
       printf("%d ",a);
      a=a/2;
    }
  if(a!=1)
  {
    hailstone(a);
  }
  else
    printf("%d",a);
}

main()
{int a;
printf("enter");
scanf("%d",&a);
  hailstone(a);
}
