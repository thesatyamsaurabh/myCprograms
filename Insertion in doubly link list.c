#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insertion_beg();
void insertion_after();
void insertion_end();
struct node
{
int data;
struct node *link;
struct node *prev;
};
struct node *first,*last,*temp,*ptr,*newy;
void print()
{
temp=first;
ptr=temp;
while(ptr->link!=NULL)
{
ptr=temp;
printf("<-%d->",ptr->data);
temp=temp->link;
}
}
void main()
{
int i,n,r;
printf("Input number of nodes in your link list:");
scanf("%d",&n);
printf("Input data of node 1:");
first=(struct node *)malloc(sizeof(struct node *));
scanf("%d",&first->data);
first->prev=NULL;
first->link=NULL;
temp=first;
for(i=1;i<n;i++)
{
printf("Input data of node %d:",i+1);
last=(struct node *)malloc(sizeof(struct node *));
scanf("%d",&last->data);
last->prev=temp;
last->link=NULL;
temp->link=last;
temp=last;
}
printf("\nYour link list is:");
print();
printf("\n\tEnter index for insertion.\n0:insertion at begining.\n1:insertion after given value.\n2:insertion at end.\n");
scanf("%d",&r);
switch(r)
{
case 0:
                insertion_beg();
                break;
case 1:
                insertion_after();
                break;
case 2:
                insertion_end();
                break;
default:
                printf("Invalid choice:");
}
getch();
}
void insertion_beg()
{
printf("Input data of your new node.");
newy=(struct node *)malloc(sizeof(struct node *));
scanf("%d",&newy->data);
temp=first;
newy->link=temp;
newy->prev=NULL;
temp->prev=newy;
first=newy;
print();
}
void insertion_after()
{
                int val;
                printf("Input data of your new node.");
newy=(struct node *)malloc(sizeof(struct node *));
scanf("%d",&newy->data);
newy->link=NULL;
newy->prev=NULL;
printf("input data after node is inserted.");
scanf("%d",&val);
temp=first;
ptr=first;
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
  ptr->link=newy;
  newy->prev=ptr;
  newy->link=temp;
  temp->prev=newy;
print();
}
void insertion_end()
{
      printf("Input data of your new node.");
newy=(struct node *)malloc(sizeof(struct node *));
scanf("%d",&newy->data);
newy->link=NULL;
temp=first;
while(temp->link!=NULL)
                temp=temp->link;
newy->prev=temp;
temp->link=newy;
print();
}
