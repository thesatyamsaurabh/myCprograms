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
ptr=first;
while(ptr!=NULL)
{               cur=ptr;
                temp=ptr->link;
                while(temp!=NULL)
                {
                if(ptr->data==temp->data)
                {
                cur->link=temp->link;
                free(temp);
                temp=cur->link;
                }
                else
                {
                                cur=cur->link;
                                temp=temp->link;
                }
                }
                ptr=ptr->link;
                }
printf("\nAfter removing duplicate nodes.\n");
print();
getch();
}
