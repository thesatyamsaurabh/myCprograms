#include<stdio.h>
#include<conio.h>
struct book
{
char title[50];
char author[30];
int price;
};
void display(struct book );
void main()
{
struct book b={"java programming  ","Raj  ",300};
display(b);
}
void display(struct book b)
{
printf("%s%s%d",b.title,b.author,b.price);
getch();
}
