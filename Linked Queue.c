#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void display();
void peek();
void reverse();
struct node
{
int data;
struct node *link;
};
struct node *rear=0,*front=0,*queue,*temp;
void main()
{
int choice;
while(1)
{
printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Peek\n5.Reverse\n6.Exit");
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
reverse();
break;
case 6:
exit(1);
default:
printf("Invalid choice");
}}
getch();
}
void enqueue()
{
                queue=(struct node *)malloc(sizeof(struct node*));
                printf("Enter data of your queue.");
                scanf("%d",&queue->data);
                queue->link=0;
                if(rear==0&&front==0)
                {
                                front=queue;
                                rear=front;
                }
                else
                {
                rear->link=queue;
                rear=queue;
                }
}
void dequeue()
{
                if(rear==0&&front==0)
                                printf("Queue is empty.");
                else
                {
                                temp=front;
                                front=front->link;
                                free(temp);
                }
}
void display()
{
                if(front==0&&rear==0)
                                printf("Queue is empty.");
                else
                {
                    temp=front;
                while(temp!=NULL)
                {
                                printf("%d ",temp->data);
                                temp=temp->link;
                }
                printf("\n");
                }
}
void peek()
{
                printf("%d",front->data);
                printf("\n");
}
void reverse()
{

                struct node *left,*right;
                temp=front;
                right=front;
                left=0;
                while(temp!=NULL)
                {
                                right=right->link;
                                temp->link=left;
                                left=temp;
                                temp=right;
                }
                temp=front;
                front=rear;
                rear=temp;
}
