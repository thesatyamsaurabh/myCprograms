#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insert_front();
void insert_rear();
void delete_e();
void display();
void peek();
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
printf("1.Insert front\n2.Insert rear.\n3.Delete\n4.Display\n5.Peek\n6.Exit");
printf("\nEnter your choice.");
scanf("%d",&choice);
switch(choice)
{
case 1:
insert_front();
break;
case 2:
insert_rear();
break;
case 3:
delete_e();
break;
case 4:
display();
break;
case 5:
peek();
break;
case 6:
exit(1);
default:
printf("Invalid choice");
}}
getch();
}
void insert_front()
{
                queue=(struct node *)malloc(sizeof(struct node*));
                printf("Enter data of your queue.");
                scanf("%d",&queue->data);
                queue->link=0;
                if(rear==0&&front==0)
                {
                                front=queue;
                                rear=queue;
                }
                else
                {
                queue->link=front;
                front=queue;
                }
}
void insert_rear()
{
                queue=(struct node *)malloc(sizeof(struct node*));
                printf("Enter data of your queue.");
                scanf("%d",&queue->data);
                queue->link=0;
                if(rear==0&&front==0)
                {
                                front=queue;
                                rear=queue;
                }
                else
                {
                rear->link=queue;
                rear=queue;
                }
}
void delete_e()
{
if(rear==0&&front==0)
{
printf("Queue is empty.");
printf("\n");}
else if(front->link==rear)
{
                  temp=rear;
                front->link=NULL;
                rear=front;
                free(temp);
}
else if(front==rear)
{
                free(front);
                front=0;rear=0;
}
else{
                temp=front;
                front=front->link;
                free(temp);
                display();
}
}
void display()
{
                if(front==0&&rear==0){
                                printf("Queue is empty.");
                                printf("\n");}
                else if(rear==front)
                {
                                printf("%d",front->data);
                                printf("\n");
                }
                else
                {
                                temp=front;
                while(temp!=0)
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
