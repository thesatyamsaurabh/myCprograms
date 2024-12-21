#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
};
int main()
{
struct node *first,*last,*temp;
int i,n;
printf("Input how many nodes to create in the list:");
scanf("%d",&n);
first=(struct node *)malloc(sizeof(struct node));
printf("Input the data of node 1: ");
scanf("%d",&first->data);
first->link=NULL;
temp=first;
for(i=1;i<n;i++)
{
last=(struct node *)malloc(sizeof(struct node));
printf("Input the data value of %d:",i+1);
scanf("%d",&last->data);
last->link=NULL;
temp->link=last;
temp=last;
}
temp=first;
printf("Data in the link list are:");
while(temp!=NULL)
{
printf("%d ",temp->data);
temp=temp->link;
}
int r;
printf("\nInput the search value:");
scanf("%d",&r);
temp=first;
while(temp!=NULL)
{
if(r==temp->data)
{
printf("Given value is present in link list:");
break;
}
else
temp=temp->link;
}
if(temp==NULL)
                printf("\nGiven value is not present in link list:");
getch();
return 0;
}
