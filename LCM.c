#include<stdio.h>
int main()
{
    int x,y,i;
    printf("enter 2 numbers:");
    scanf("%d%d",&x,&y);
    for (i=x;i<=x*y;i++);
    {
        if (i%x==0 && i%y==0)
        {
            printf("LCM is %d",i);
            
        }
    }
return 0;



}