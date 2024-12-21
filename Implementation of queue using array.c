#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define n 5
void enqueue();
void dequeue();
void display();
void peek();
int front=-1,rear=-1,queue[n];
void main()
{
int choice;
while(1)
{
printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Peek\n5.Exit");
printf("\nEnter your choice.");
scanf("%d",&choice);
switch(choice)
{
case 1:
enqueue();
break;
case 2:
dequeue();
break;
case 3:
display();
break;
case 4:
peek();
break;
case 5:
exit(1);
default:
printf("Invalid choice");
}}
getch();
}
void enqueue()
{
int x;
if(rear==n-1)
printf("Overflow");
else if(front==-1&&rear==-1)
{
printf("Enter item to enqueue.");
scanf("%d",&x);
rear=front=0;
queue[rear]=x;
}
else
{
printf("Enter item to enqueue.");
scanf("%d",&x);
rear++;
queue[rear]=x;
}}
void dequeue()
{
if(front==-1&&rear==-1)
printf("Underflow.");
else if(front==rear)
{
                printf("After dequeue.");
front=-1;
rear=front;
display();
printf("\n");
}
else
{
printf("After dequeue.");
front++;
display();
printf("\n");
}}
void display()
{
int i;
for(i=front;i<=rear;i++)
{
printf("%d ",queue[i]);
}
printf("\n");
}
void peek()
{
                printf("%d",queue[front]);
                printf("\n");
}
