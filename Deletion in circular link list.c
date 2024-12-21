#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create();
void deletion_beg();
void deletion_middle();
void deletion_end();
struct node
{
int data;
struct node *link;
};
struct node *first,*last,*temp,*ptr;
void print()
{
    if(first==NULL)
                printf("\n list is empty");
          else if(first->link==0)
                printf("<-%d->",first->data);
          else{
temp=first;
ptr=temp;
while(ptr->link!=first)
{
                ptr=temp;
printf("%d->",temp->data);
temp=temp->link;}
}
}
void main()
{
int r;
create();
while(1)
{
printf("\nEnter index for deletion.\n0:deletion at begining.\n1:Deletion at middle.\n2:Deletion at end.\n3:Exit.");
scanf("%d",&r);
switch(r)
{

case 0:
                deletion_beg();
                break;
case 1:
                deletion_middle();
                break;
case 2:
                deletion_end();
                break;
case 3:
                exit(1);
default:
                printf("Invalid choice:");
}}
getch();
}
void create()
{
                int i,n;
printf("Enter number of nodes:");
scanf("%d",&n);
printf("Enter data of node 1:");
first=(struct node *)malloc(sizeof(struct node *));
scanf("%d",&first->data);
first->link=NULL;
temp=first;
if(n!=1)
{
for(i=1;i<n;i++)
{
printf("Enter the data of node %d:",i+1);
last=(struct node *)malloc(sizeof(struct node *));
scanf("%d",&last->data);
last->link=first;
temp->link=last;
temp=last;
}}
printf("Your link list is:");
print();
}
void deletion_beg()
{
                if(first->link==NULL)
                {
                                free(first);
                                printf("List is Empty.");
                }
                else if(first->link==last&&last->link==first)
                {
                                temp=first;
                                first=first->link;
                                first->link=0;
                                free(temp);
                                print();
                }
                else
                {
                temp=first;
                first=temp->link;
                free(temp);
                last->link=first;
                printf("After deletion.\n");
                print();}
}
void deletion_middle()
{

                int val;
                printf("Enter the value after which you want to delete:");
                scanf("%d",&val);
                ptr=first;
                if(ptr->data==val)
                {
                   ptr=temp;
                                temp=temp->link;
                }else{
                while(ptr->data!=val)
                {
                                ptr=temp;
                                temp=temp->link;
                }}
                ptr->link=temp->link;
                free(temp);
                print();
}
void deletion_end()
{

  if(first->link==0)
                {
                                free(first);
                                printf("After Deletion List is empty.");
                }
                else if(first->link==last&&last->link==first)
                {
                                temp=last;
                                first->link=0;
                                free(temp);
                                print();
                }
                else{
                temp=first;
                while(temp->link!=first)
                {
                ptr=temp;
                temp=temp->link;
                }
                ptr->link=first;
                free(temp);
                print();}
}
