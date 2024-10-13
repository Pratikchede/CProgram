#include <stdio.h>
int main()
{
int x;
printf("enter a number:");
scanf("%d,%d",&x);
if(x>0)
{
    printf("it is positive");
}
else if(x<0)
{
    printf("it is negative");
}
else
{
    printf("neither positive nor negative");
}
return 0;

}


  