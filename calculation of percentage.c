#include<stdio.h>
#include<conio.h>
main()
{
float m1,m2,m3,m4,m5,A,P;
printf("Enter the marks of subject 1:\n");
printf("Enter the marks of subject 2:\n");
printf("Enter the marks of subject 3:\n");
printf("Enter the marks of subject 4:\n");
printf("Enter the marks of subject 5:\n");
scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
A=m1+m2+m3+m4+m5;
printf("Aggregate marks=%f\n",A);
P=((m1+m2+m3+m4+m5)*100)/500;
printf("Percentage of marks=%f",P);
getch();
}
