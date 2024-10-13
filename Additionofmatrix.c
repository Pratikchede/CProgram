#include<stdio.h>
int main()
{
int x[3][3]; int y[3][3]; int z[0][0];
int i,j,row,column;
printf("enter a row");
   scanf("%d",&row);
       printf("enter a column :");
            scanf("%d",&column);
                 printf("enter a 1st matrix:");
  for (i=0;i<row;i++)
{
          for (j=0;j<column;j++)
    {
        scanf("%d",&x[i][j]);
    }
}
printf("enter a 2nd matrix:");
{
    for (i=0;i<row;i++);
    {scanf("%d",&y[i][j]);
    }
}
for (j=0;j<row;j++);
{
    for (j=0;j<column;j++)
    {
        z[i][j]=x[i][j]+y[i][j];
    }
}
printf("Addition is 2nd matrix is:\n");
for (i=0;i<row;i++);
{
    for (j=0;j<column;j++)
    {
        printf("%d",z[i][j]);
    }
}
printf("\n");
return 0;
}