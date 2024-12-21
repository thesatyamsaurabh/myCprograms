#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insertion_beg();
void insertion_mid();
void insertion_end();
struct node
{
struct node *prev;
int data;
struct node *link;
};
struct node *first,*temp,*last,*ptr,*newy;
void print()
{
ptr=first;
temp=ptr;
while(ptr->link!=first)
{
                ptr=temp;
                printf("<-%d->",temp->data);
temp=temp->link;
}}
void main()
{
int i,n,r;
printf("Input number of nodes:");
scanf("%d",&n);
printf("Input data of node 1:");
first=(struct node *)malloc(sizeof(struct node *));
scanf("%d",&first->data);
first->prev=NULL;
first->link=NULL;
temp=first;
for(i=1;i<n;i++)
{
printf("Input value of node %d:",i+1);
last=(struct node *)malloc(sizeof(struct node *));
scanf("%d",&last->data);
last->prev=temp;
first->prev=last;
last->link=first;
temp->link=last;
last->prev=temp;
temp=last;
}
printf("Your link list is:");
print();
printf("\n\tEnter index for insertion:\n");
printf("0:Insertion at begining.\n1:Insertion after a given node.\n2:Insertion at end.");
scanf("%d",&r);
switch(r)
{
case 0:
                insertion_beg();
                break;
case 1:
                insertion_mid();
                break;
case 2:
                insertion_end();
                break;
default:
                printf("Invalid choice.");
}
getch();
}
void insertion_beg()
{
                newy=(struct node *)malloc(sizeof(struct node *));
                printf("Enter data of new node.");
                scanf("%d",&newy->data);
                temp=first;
                while(temp->link!=first)
                                temp=temp->link;
                                newy->prev=temp;
                newy->link=first;
                temp->link=newy;
                first=newy;
                print();

}
void insertion_mid()
{
                int val;
                printf("Enter the node value after which you insert new node.");
                scanf("%d",&val);
                temp=first;
                ptr=temp;
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
                printf("\nEnter the data of new node.");
                newy=(struct node *)malloc(sizeof(struct node *));
                scanf("%d",&newy->data);
                newy->link=temp;
                temp->prev=newy;
                ptr->link=newy;
                newy->prev=ptr;
                print();
}
void insertion_end()
{
                newy=(struct node *)malloc(sizeof(struct node *));
                printf("Enter data of new node.");
                scanf("%d",&newy->data);
                temp=first;
                while(temp->link!=first)
                                temp=temp->link;
                                temp->link=newy;
                                newy->prev=temp;
                                newy->link=first;
                                first->prev=newy;
                                print();

}
