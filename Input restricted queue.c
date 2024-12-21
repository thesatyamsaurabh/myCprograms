#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insert();
void delete_front();
void delete_rear();
void display();
void peek();
struct node
{
int data;
struct node *link;
};
struct node *rear,*front,*queue,*temp,*ptr;
void main()
{
int choice;
while(1)
{
printf("1.Insert\n2.Delete front.\n3.Delete rear.\n4.Display\n5.Peek\n6.Exit");
printf("\nEnter your choice.");
scanf("%d",&choice);
switch(choice)
{
case 1:
insert();
break;
case 2:
delete_front();
break;
case 3:
delete_rear();
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
void insert()
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
void delete_front()
{
if(rear==0&&front==0)
{
printf("Queue is empty.");
printf("\n");}
else if(rear==front)
{
                free(front);
                front=0;rear=0;
}
else{

                                temp=front;
                                front=front->link;
                                free(temp);
                }}
void delete_rear()
{
if(rear==0&&front==0)
{
printf("Queue is empty.");
printf("\n");}
else if(rear==front)
{
                free(front);front=0;rear=0;
}
else if(front->link==rear)
{
                temp=rear;
                front->link=NULL;
                free(temp);
                rear=front;
}
else
             {
             temp=front;
             while(temp->link!=NULL)
             {
                             ptr=temp;
                             temp=temp->link;
             }
             ptr->link=NULL;
             free(temp);
             rear=ptr;
             }
}
void display()
{
                if(front==0&&rear==0){
                                printf("Queue is empty.");
                                printf("\n");}
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
