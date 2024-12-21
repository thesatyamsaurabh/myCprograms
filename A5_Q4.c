#include<stdio.h>
#include<conio.h>
struct stud
{
int roll;
char name[30];
int marks;
}s;
void main()
{
int size;
size=sizeof(s);
printf("Size of structure=%d",size);
getch();
}
