#include<stdio.h>
int main ()
{
int x,y,z,ch;
printf("press 1 Addition:\n");
printf("press 2 Subtractio:\n");
printf("press 3 Multiplication:\n");
scanf("%d",&ch);
while(1)
{
    printf("\n\n enter your choice:");
    scanf("%d",&ch);

switch (ch)
{
    case 1:
    {
printf("enter 2 number:");
scanf("%d %d",&x,&y);
z=x+y;
printf("addition is %d",z);
break;

}
 
 case 2:
 {
printf("enter 2number :");
scanf("%d %d",&x,&y);
z=x-y;
printf("subtraction is %d",z);
return 0;
}
case 3:
 {
printf("enter 2 number:");
scanf("%d %d",&x,&y);
z=x*y;
printf("multiplicatin is %d",z);
return 0;

}
}

}
}

