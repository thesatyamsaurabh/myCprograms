#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void deletion_beg();
void deletion_after();
void deletion_end();
void create();
struct node
{
int data;
struct node *link;
struct node *prev;
};
struct node *first=0,*last=0,*temp,*ptr;
int n;
void print()
{
                if(first->link==0)
                                printf("<-%d->",first->data);
                else{
temp=first;
ptr=first;
while(ptr->link!=NULL)
{
ptr=temp;
printf("<-%d->",temp->data);
temp=temp->link;}
}
}
void main()
{
                int r;
printf("Input number of nodes in your link list:");
scanf("%d",&n);
create();
while(1)
{
printf("\n\tEnter index for deletion.\n0:deletion at begining.\n1:deletion after given value.\n2:deletion at end.\n3:Exit.");
scanf("%d",&r);
switch(r)
{
case 0:
                deletion_beg();
                break;
case 1:
                deletion_after();
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
                int i;
                printf("Input data of node 1:");
first=(struct node *)malloc(sizeof(struct node *));
scanf("%d",&first->data);
first->prev=NULL;
first->link=NULL;
temp=first;
if(n!=1){
for(i=1;i<n;i++)
{
printf("Input data of node %d:",i+1);
last=(struct node *)malloc(sizeof(struct node *));
scanf("%d",&last->data);
last->prev=temp;
last->link=NULL;
temp->link=last;
temp=last;
}}
printf("\nYour link list is:");
print();
}
void deletion_beg()
{
                if(first->link==0)
                {
                                free(first);
                                printf("After Deletion List is Empty.");
                }
                else{
          temp=first;
          first=first->link;
          free(temp);
          first->prev=NULL;
          if(first==NULL)
                printf("\n list is empty");
          else if(first->link==0)
                printf("<-%d->",first->data);
          else
          print();
                }
}
void deletion_after()
{
                int val;
                printf("Enter the value after which you delete node.");
                scanf("%d",&val);

                temp=first;
                ptr=temp;
                if(ptr->data==val)
                {
                                ptr=temp;
                                temp=temp->link;
                }
                else
                {
                while(ptr->data!=val)
                {
                                ptr=temp;
                                temp=temp->link;
                }}
                ptr->link=temp->link;
                temp->link->prev=ptr;
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
                else{
                                                temp=first;
                while(temp->link!=NULL)
                {
                ptr=temp;
                temp=temp->link;
                }
                last=ptr;
                last->link=NULL;
                free(temp);
          print();}
}
