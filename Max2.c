#include<stdio.h>
int main ()
{

int a,b;
printf("enter two numbers:");
scanf("%d,%d",&a,&b);
if (a>b)
{
printf("%d,is greatear than a");
}
else if (a<b)
{
printf("%d,is smaller than b");
}
else if (a==b)
printf("both are equal");
return 0;


} 