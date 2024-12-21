#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insert_beg();
void insert_end();
void insert_middle();
struct node
{
int data;
struct node *link;
};
struct node *first,*last,*temp,*ptr,*new;
void print()
{
temp=first;
ptr=temp;
while(ptr->link!=first)
{
                ptr=temp;
printf("%d->",temp->data);
temp=temp->link;
}}
void main()
{
int i,n;
printf("Input number of nodes in your circular link list:");
scanf("%d",&n);
printf("Input the data of node 1:");
first=(struct node *)malloc(sizeof(struct node *));
scanf("%d",&first->data);
first->link=NULL;
temp=first;
for(i=1;i<n;i++)
{
printf("Input the data of node %d:",i+1);
last=(struct node *)malloc(sizeof(struct node *));
scanf("%d",&last->data);
last->link=first;
temp->link=last;
temp=last;
}
print();
int r;
printf("\n\tEnter the index for insertion:\n0:Insertion at begining\n1:insertion b|w begining and end\n2:Insertion at end.\n");
scanf("%d",&r);
switch(r)
{
case 0:
                insert_beg();
                break;
case 1:
                insert_middle();
                break;
case 2:
                insert_end();
                break;
default:
                printf("Invalid choice:");
}
getch();
}
void insert_beg()
{
   printf("Input data of new node:");
   new=(struct node *)malloc(sizeof(struct node *));
   scanf("%d",&new->data);
   new->link=first;
   last->link=new;
   temp=new;
   ptr=temp;
while(ptr->link!=new)
{
                ptr=temp;
printf("%d->",temp->data);
temp=temp->link;
}
}
void insert_middle()
{
                int val;
                printf("Input the value after which you want to insert.");
                scanf("%d",&val);
                printf("Input data of new node.");
                new=(struct node *)malloc(sizeof(struct node *));
                scanf("%d",&new->data);
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

                          ptr->link=new;
                          new->link=temp;
                          print();
}
void insert_end()
{
           printf("Input data of new node.");
                new=(struct node *)malloc(sizeof(struct node *));
                scanf("%d",&new->data);
                last->link=new;
                new->link=first;
                print();
}
