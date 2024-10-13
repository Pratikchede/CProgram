#include<stdio.h>
int Addition(int Value1,int Value2)
{
    return Value1+Value2;
}
int main()
{
    int No1=0;
    int No2=0;
    int Add=0;
    printf("Enter the Number 1 : ");
    scanf("%d",&No1);

    printf("Enter the Number 2 : ");
    scanf("%d",&No2);

    Add=Addition(No1,No2);
    printf("Addition of %d + %d is : %d",No1,No2,Add);

    return 0;
}