#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
};
struct node *first1,*last1,*temp,*first2,*last2,*ptr;
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
printf("\tEnter data in sorted way.");
printf("\nEnter the number of nodes in first link list.");
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
printf("Enter the number of nodes in second link list.");
scanf("%d",&m);
printf("Enter data of node 1.");
first2=(struct node *)malloc(sizeof(struct node *));
scanf("%d",&first2->data);
first2->link=NULL;
temp=first2;
for(i=1;i<m;i++)
{
printf("Enter data of node %d.",i+1);
last2=(struct node *)malloc(sizeof(struct node *));
scanf("%d",&last2->data);
last2->link=NULL;
temp->link=last2;
temp=last2;
}
if(n==1)
first1->link=first2;
else
last1->link=first2;
printf("\tAfter merging.");
print();
temp=first1;
mergesort(&temp);
printf("\nAfter Sorting\n");
while(temp!=NULL)
{
                printf("%d->",temp->data);
                temp=temp->link;
}
getch();
}
void mergesort(struct node** headRef)
{
  struct node* head=*headRef;
  struct node* left;
  struct node* right;
  //if the list is empty or single element
  if(head==NULL||head->link==NULL)
                                return;
  //split the link list into two halves
  split(head,&left,&right);
  //recursively sort the two halves
  mergesort(&left);
  mergesort(&right);
  //merge the sorted halves
  *headRef=merge(left,right);
}
void split(struct node* source ,struct node** left,struct node** right)
{
                struct node* fast;
                struct node *slow;
                slow=source;
                fast=source->link;
                while(fast!=NULL)
                {
                                fast=fast->link;
                                if(fast!=NULL)
                                {
                                                slow=slow->link;
                                                fast=fast->link;
                                }
                }
                *left=source;
                *right=slow->link;
                slow->link=NULL;

}
//function to merge two sorted link lists
int merge(struct node*left,struct node* right)
{
  //base cases
  if(left==NULL)
                                return right;
  if(right==NULL)
                return left;
  struct node *result=NULL;
  //pick either left or right and recur
  if(left->data<=right->data)
  {
                  result=left;
                  result->link=merge(left->link,right);
  }
  else
  {
                  result=right;
                  result->link=merge(left,right->link);
  }
  return result;
}

