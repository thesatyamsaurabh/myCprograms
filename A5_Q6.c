#include<stdio.h>
#include<conio.h>
struct record
{
char name[30];
int runs;
int in;
int no;
float ba;
}r[50];
void main()
{
int n,i;
printf("Enter number of players:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter %d player record:\n",i+1);
printf("Enter player name:");
scanf("%s",r[i].name);
printf("Enter runs:");
scanf("%d",&r[i].runs);
printf("Enter innings:");
scanf("%d",&r[i].in);
printf("Enter its number of not out innings:");
scanf("%d",&r[i].no);
}
printf("\tDisplaying Record:\n");
for(i=0;i<n;i++)
{
r[i].ba=r[i].runs/(r[i].in-r[i].no);
}
printf("Players name\t Runs\t     Innings \t Not out\t Batting average:\n");
for(i=0;i<n;i++)
{
printf("%s\t\t %d\t\t  %d\t %d\t\t %f\n",r[i].name,r[i].runs,r[i].in,r[i].no,r[i].ba);
}
getch();
}
