//printing the traingle
                //  1
              //  2   2
          //   3    3   3
          // 4    4   4    4
       //  5   5    5   5   5
#include<stdio.h>
#include<conio.h>
main()
{
int i,j;
for(i=1;i<=5;i++)
{
       for(j=5;j>i;j--)
    {
        printf(" ");
    }
        for(j=1;j<=i;j++)
        {
            printf("%d ",i);
        }
    printf("\n");
    }
    getch();
}
