#include<stdio.h>
int main()
{
    int x,a=-1,b=1,c,i;
printf("enter a range:");
scanf("%d ", &x);

for (i=0;i<x;i++)

{
    c=a+b;
    printf("%d ",c);
    a=b;
    b=c;

}
return 0;


}