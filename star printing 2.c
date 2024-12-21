#include<stdio.h>
#include<conio.h>
main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i+j>n)
                printf("*");
            else
                printf(" ");
        }

    printf("\n");
    }
    getch();

}


