#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create();
void deletion_beg();
void deletion_end();
void deletion_after();
struct node
{
int data;
struct node *link;
};
struct node *first,*last,*temp,*ptr;
void print()
{
temp=first;
while(temp!=NULL)
{
printf("%d->",temp->data);
temp=temp->link;
}
}
void create()
{
 int i,n;
printf("Input how many nodes in your link list:");
scanf("%d",&n);
first=(struct node *)malloc(sizeof(struct node *));
printf("Input data of node 1:");
scanf("%d",&first->data);
first->link=NULL;
temp=first;
for(i=1;i<n;i++)
{
printf("Input data in node %d:",i+1);
last=(struct node *)malloc(sizeof(struct node*));
scanf("%d",&last->data);
last->link=NULL;
temp->link=last;
temp=last;
}
printf("Your link list is:\n");
print();
}
void main()
{
create();
int r;
printf("\n\tEnter index for deletion:\n0:deletion at begining.\n1:deletion after given node.\n2:deletion at end.\n");
scanf("%d",&r);
switch(r)
{
case 0:
      deletion_beg();
      break;
case 1:
      deletion_after();
      break;
case 2:
     deletion_end();
      break;
default:
      printf("Invalid choice:");
}
getch();
}
void deletion_beg()
{
temp=first;
first=first->link;
free(temp);
print();
}
void deletion_after()
{
                int val;
                printf("Input the num value after which you want to delete:");
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
                ptr->link=temp->link;
                free(temp);
                print();

}
void deletion_end()
{
             ptr=first;
             temp=ptr;
             while(temp->link!=NULL)
             {
                             ptr=temp;
                             temp=temp->link;
             }
             ptr->link=NULL;
             free(temp);
             print();
}
