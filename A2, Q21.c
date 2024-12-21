#include<stdio.h>
#include<conio.h>
void main()
{
int i,count=0;
float w,h;
printf("Enter the weight and height of student:\n");
for(i=1;i<10;i++)
{
scanf("%f %f\n",&w,&h);
if(w<50 && h>170)
count=count+1;
}
printf("weight of boys<50 and height>170=%d",count);
getch();
}

