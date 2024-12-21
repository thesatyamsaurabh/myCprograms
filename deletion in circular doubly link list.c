#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void deletion_beg();
void deletion_mid();
void deletion_end();
struct node
{
struct node *prev;
int data;
struct node *link;
};
struct node *first,*last,*temp,*ptr;int n;
void print()
{
          if(first->link==0)
                printf("<-%d->",first->data);
          else{
temp=first;
ptr=temp;
while(ptr->link!=first)
{
ptr=temp;
printf("<-%d->",temp->data);
temp=temp->link;}
}}
void main()
{
int i,r;
printf("Input number of node.");
scanf("%d",&n);
printf("Input data of node 1.");
first=(struct node *)malloc(sizeof(struct node *));
scanf("%d",&first->data);
first->link=NULL;
first->prev=NULL;
temp=first;
for(i=1;i<n;i++)
{
printf("input data of node %d:",i+1);
last=(struct node *)malloc(sizeof(struct node *));
scanf("%d",&last->data);
first->prev=last;
last->link=first;
temp->link=last;
last->prev=temp;
temp=last;
}
printf("Your link list is:");
print();
while(1){
printf("\n\tEnter the index for deletion.\n");
printf("0:Deletion at begining\n1:Deletion after given node.\n2:Deletion at end.\n3:Exit");
scanf("%d",&r);
switch(r)
{
                case 0:
                                deletion_beg();
                                break;
                case 1:
                                deletion_mid();
                                break;
                case 2:
                                deletion_end();
                                break;
                case 3:
                                exit(1);
                default :
                                printf("Invalid choice.");}
}
getch();
}
void deletion_beg()
{
                if(first->link==NULL)
                {
                                free(first);
                                printf("List is Empty.");
                }
                else if(first->link==first->prev)
                {
                                temp=first;
                                first=first->link;
                                first->prev=0;first->link=0;
                                free(temp);
                                print();
                }
                else{
                temp=first;
                while(temp->link!=first)
                                temp=temp->link;
                temp->link=first->link;
                first->link->prev=temp;
                temp=first;
                first=first->link;
                free(temp);
                print();}
}
void deletion_mid()
{
                int val;
                printf("Input value of node after which deletion is performed.");
                scanf("%d",&val);
                temp=first;
                ptr=temp;
                if(ptr->data==val)
                temp=temp->link;
                else{
                while(ptr->data!=val)
                {
                                ptr=temp;
                                temp=temp->link;
                }
                }
                ptr->link=temp->link;
                temp->link->prev=ptr;
                free(temp);
                print();
}
void deletion_end()
{
                if(first->link==NULL)
                {
                                free(first);
                                printf("List is Empty.");
                }
                else if(first->link==first->prev)
                {
                                temp=last;
                                first->link=0;
                                first->prev=0;
                                free(temp);
                                printf("<-%d->",first->data);

                }
                 else{
                ptr=first;
                while(ptr->link!=first)
                {
                                ptr=ptr->link;

                }
                                ptr->prev->link=first;
                                first->prev=ptr->prev;
                                free(ptr);
                                print();}
}
