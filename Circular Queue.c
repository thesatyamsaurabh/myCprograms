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
if(front==-1&&rear==-1)
{
front=0;rear=0;
printf("Enter data to Enqueue.");
scanf("%d",&x);
queue[rear]=x;
}
else if((rear+1)%n==front)
printf("Queue is full.");
else
{
rear=(rear+1)%n;
printf("Enter data to Enqueue.");
scanf("%d",&x);
queue[rear]=x;
}
}
void dequeue()
{
if(front==-1&&rear==-1)
printf("Queue is empty.");
else if(front==rear)
{
front=-1;rear=-1;
display();
}
else
{
front=(front+1)%n;
display();
}
}
void display()
{
int i=front;
if(front==-1&&rear==-1)
{
printf("Queue is Empty.");
printf("\n");}
else
{
while(i!=rear)
{
printf("%d ",queue[i]);
i=(i+1)%n;
}
printf("%d",queue[rear]);
printf("\n");}}
void peek()
{
printf("%d",queue[front]);
printf("\n");}
