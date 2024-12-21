#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
};
struct node *first,*last,*temp;
void print()
{
temp=first;
while(temp!=0)
{
printf("%d->",temp->data);
temp=temp->link;
}
}
void main()
{
int min,max,n,i;
printf("Enter the number of nodes.");
scanf("%d",&n);
printf("Enter data of node 1.");
first=(struct node *)malloc(sizeof(struct node *));
scanf("%d",&first->data);
first->link=0;
temp=first;
for(i=1;i<n;i++)
{
printf("Enter data of node %d.",i+1);
last=(struct node *)malloc(sizeof(struct node *));
scanf("%d",&last->data);
last->link=0;
temp->link=last;
temp=last;
}
temp=first;
max=first->data;
min=first->data;
while(temp!=0)
{
if(min>temp->data)
min=temp->data;
if(max<=temp->data)
max=temp->data;
temp=temp->link;
}
printf("Maximum value=%d and Minimum value=%d.",max,min);
getch();
}
