#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
};
struct node *first1,*last1,*temp,*first2,*last2,*temp2;
void print()
{
temp=first1;
while(temp!=NULL)
{
printf("%d->",temp->data);
temp=temp->link;
}
}
void main()
{
int i,n,m;
printf("\tEnter the number of nodes in first link list.");
scanf("%d",&n);
printf("Enter data of node 1.");
first1=(struct node *)malloc(sizeof(struct node *));
scanf("%d",&first1->data);
first1->link=NULL;
temp=first1;
for(i=1;i<n;i++)
{
printf("Enter data of node %d.",i+1);
last1=(struct node *)malloc(sizeof(struct node *));
scanf("%d",&last1->data);
last1->link=NULL;
temp->link=last1;
temp=last1;
}
printf("\tEnter the number of nodes in second link list.");
scanf("%d",&m);
printf("Enter data of node 1.");
first2=(struct node *)malloc(sizeof(struct node *));
scanf("%d",&first2->data);
first2->link=NULL;
temp2=first2;
for(i=1;i<m;i++)
{
printf("Enter data of node %d.",i+1);
last2=(struct node *)malloc(sizeof(struct node *));
scanf("%d",&last2->data);
last2->link=NULL;
temp2->link=last2;
temp2=last2;
}
temp->link=first2;
printf("\tAfter merging.");
print();
getch();
}
