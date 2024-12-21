#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insert_beg();
void insert_end();
void insert_after();
void insert_before();
struct node
{
int data;
struct node *link;
};
struct node *first,*last,*temp,*new;
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
int i,n,r;
printf("How many nodes you want have in your list:");
scanf("%d",&n);
first=(struct node *)malloc(sizeof(struct node));
printf("Input data of node 1:");
scanf("%d",&first->data);
first->link=NULL;
temp=first;
for(i=1;i<n;i++)
{
last=(struct node *)malloc(sizeof(struct node *));
printf("Input data of node %d:",i+1);
scanf("%d",&last->data);
last->link=NULL;
temp->link=last;
temp=last;
}
printf("Your link list is:");
print();
printf("\n\tEnter the index for your choice:\n");
printf("0:New node being inserted at begining.\n1:New node being inserted at end.\n2:New node being inserted after a given node.\n3:New node being inserted before a given node.\n");
scanf("%d",&r);
new=(struct node *)malloc(sizeof(struct node));
switch(r)
{
         case 0:
                     insert_beg();
                     break;
         case 1:
                insert_end();
                break;
         case 2:
                insert_after();
                break;
         case 3:
                insert_before();
                break;
         default:
                printf("Invalid choice:");
}
getch();
}
void insert_beg()
{               printf("Input data of new node:");
                scanf("%d",&new->data);
                new->link=first;
                first=new;
                print();
}
void insert_end()
{
                printf("Input data of new node:");
                scanf("%d",&new->data);
                new->link=NULL;
                last->link=new;
                print();
}
void insert_after()
{
            int val;
                struct node *ptr;
                printf("Input the data in new node:");
                scanf("%d",&new->data);
                printf("Input data value of node after which you want to insert:");
                scanf("%d",&val);
                temp=first;
                ptr=first;
                if(ptr->data==val)
                 {
                               ptr=temp;
                               temp=temp->link;
                } else{
                while(ptr->data!=val)
                {
                               ptr=temp;
                               temp=temp->link;
                }}
                ptr->link=new;
                new->link=temp;
                print();

}
void insert_before()
{
                int val;
                struct node *ptr;
                printf("Input the data in new node:");
                scanf("%d",&new->data);
                printf("Input data value of node before which you want to insert:");
                scanf("%d",&val);
                temp=first;
                while(temp->data!=val)
                {
                               ptr=temp;
                               temp=temp->link;
                }
                ptr->link=new;
                new->link=temp;
                print();
}
