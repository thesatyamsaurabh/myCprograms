#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a[10],b[10],i;
float l,s=0;
printf("Enter the x coordinate of all the 10 points:");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the y coordinate of all the 10 points:");
for(i=0;i<10;i++)
{
                scanf("%d",&b[i]);
}
l=sqrt(pow(a[9]-a[0],2)+pow(b[9]-b[0],2));
printf("Distance of last point from first point is %f",l);
for(i=0;i<9;i++)
{
                s=s+sqrt(pow(a[i+1]-a[i],2)+pow(b[i+1]-b[i],2));
}
printf("\nSum of distance between two consecutive points=%f",s);
getch();
}
