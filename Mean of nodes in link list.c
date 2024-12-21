#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
};
struct node *first,*last,*temp,*ptr,*cur;
void print()
{
temp=first;
while(temp!=NULL)
{
printf("%d->",temp->data);
temp=temp->link;
}
}
void main()
{
int i,n;
float mean,sum=0;
printf("Enter the number of nodes.");
scanf("%d",&n);
printf("Enter data of node 1.");
first=(struct node *)malloc(sizeof(struct node *));
scanf("%d",&first->data);
first->link=NULL;
temp=first;
for(i=1;i<n;i++)
{
printf("Enter data of node %d.",i+1);
last=(struct node *)malloc(sizeof(struct node *));
scanf("%d",&last->data);
last->link=NULL;
temp->link=last;
temp=last;
}
printf("Data of your node are.\n");
print();
temp=first;
while(temp!=NULL)
{
sum=sum+temp->data;
temp=temp->link;
}
mean=sum/n;
printf("\nAfter adding value stored in nodes is %d.\n",sum);
printf("Mean=%.2f",mean);
getch();
}




