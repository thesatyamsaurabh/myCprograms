#include<stdio.h>
#include<conio.h>
#define SIZE 10
void push();
void pop();
void display();
int top=-1;
int stack[SIZE];
void main()
{
int choice ;
while(1)
{
printf("\n1.Push\n2.Pop\n3.Display\n4.Quit");
printf("\nEnter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
exit(1);
default:
printf("Invalid Choice");
}}}
void push()
{
int item;
if(top==(SIZE-1))
printf("\nStack Overflow.");
else
{
printf("Enter the item to be pushed in stack:");
scanf("%d",&item);
top=top+1;
stack[top]=item;}}
void pop()
{
if(top==-1)
printf("stack Underflow\n");
else
{
printf("\nPopped element is:%d\n",stack[top]);
top=top-1;
}}
void display()
{
int i;
if(top==-1)
printf("\nStack is empty.");
else
{
printf("\nStack elements.\n");
for(i=top;i>=0;i--)
printf("%d ",stack[i]);
printf("\n");}}
