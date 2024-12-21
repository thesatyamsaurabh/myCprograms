#include<stdio.h>
#include<conio.h>
#include<math.h>
float mean(float a[20],int );
float std(float[20],int,float);
int main()
{
int n,i;
float a[20],m,sd;
printf("Enter the number of observation:");
scanf("%d",&n);
printf("Enter the data for mean and standard deviation:");
for(i=0;i<n;i++)
{
scanf("%f",&a[i]);
}
m=mean(a,n);
printf("Mean of given observation=%f\n",m);
sd=std(a,n,m);
printf("Standard deviation=%f",sd);
getch();
}
float mean(float a[20],int n)
{
int j;
float s=0;
for(j=0;j<n;j++)
{
s=s+a[j];
}
return((s/n));
}
float std(float a[20],int n,float m)
{
int i;
float k=0;
for(i=0;i<n;i++)
{
                k=k+pow(a[i]-m,2);
}
return sqrt(k/n);
}
