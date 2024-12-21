#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void push();
void pop();
void display();
void peek();
struct node
{
int data;
struct node *link;
};
struct node *top=0,*newnode,*temp;
void main()
{
int choice;
while(1)
{
printf("\n1.Push\n2.Pop\n3.Display\n4.Peek\n5.Quit");
printf("\nEnter your choice.");
scanf("%d",&choice);
switch(choice)
{
case 1:
push();
break;
case 2:
pop();
case 3:
display();
break;
case 4:
peek();
break;
case 5:
exit(1);
default :
printf("Invalid choice.");}}
getch();
}
void push()
{
newnode=(struct node *)malloc(sizeof(struct node *));
printf("Enter data to be pushed.\n");
scanf("%d",&newnode->data);
newnode->link=top;
top=newnode;
}
void pop()
{
                temp=top;
                top=top->link;
                free(temp);
}
void display()
{
   temp=top;
   if(top==0)
                                printf("stack is empty.");
   else
   {
                   while(temp!=0)
                   {
                                   printf("%d ",temp->data);
                                   temp=temp->link;
                   }
   }
}
void peek()
{               if(top==0)
                printf("Stack is empty.");
                else
                printf("\nTop element is %d",top->data);
}
