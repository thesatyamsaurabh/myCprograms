#include<stdio.h>
void add(int *n1,int *n2);
int main()
{
	int a,b;
	printf("Enter two numbers for Sum:");
	scanf_s("%d%d",&a,&b);
	add(&a,&b);
	return 0;
}
void add(int *n1,int *n2)
{
	int **p1,**p2;
	p1=&n1;
	p2=&n2;
	printf("Sum=%d",(**p1)+(**p2));
}
