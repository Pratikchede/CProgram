#include<stdio.h>
int main()
{
    int x,y,i,s=1; 
printf("enter a coefficient:");
scanf("%d",&x);
printf("enter a power:");
scanf("%d",&y);

for (i=1;i<y;i++)
{
s=s*x;

}
printf("Result is %d",s);
return 0;




}