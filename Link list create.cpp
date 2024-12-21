#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
	{
		int data;
		node *link;
	};
	struct node *first,*temp,*last,*temp1;
int i;
void create_link_list(int);
void print()
{

     temp=first;
		while(temp!=NULL)
		{
			printf("%d->",temp->data);
			temp=temp->link;
		}
}

void Deletion()
{
 temp1=first;
 first=first->link;
 free(temp1);
  print();
}

	int main ()
	{
		int n,r;
		printf("How many nodes to creates in the list:");
		scanf("%d",&n);
		create_link_list(n);
		printf("Enter 0 for deletion");
		scanf("%d",&r);
		if(r==0)
                                   Deletion();
		getch();
		return 0;
	}
	void create_link_list(int n)
	{
		first=(node *)malloc(sizeof(node));
		printf("Input data value of node 1:");
		scanf("%d",&first->data);
		first->link=NULL;
		temp=first;
		for(i=0;i<n-1;i++)
		{
			last=(node *)malloc(sizeof(node));
			printf("Enter data of %d link list:",i+2);
			scanf("%d",&last->data);
			last->link=NULL;
			temp->link=last;
			temp=last;
		}
		print();
	}
