#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void inTopost();
void pop();
void push(char);
int precedence(char symbol);
#define max 100
char stack[max];
char infix[max],postfix[max];
int top=-1;
void main()
{
printf("Enter the infix expression.");
gets(infix);
inTopost();
getch();
}
void inTopost()
{
int i,j=0;
char symbol,next;
for(i=0;i<strlen(infix);i++)
{
symbol=infix[i];
switch(symbol)
{
case'(':
push(symbol);
break;
case')':
while((next=pop())!='('&&next!='.')
postfix[j++]=next;
break;
case'+':
case'-':
case'*':
case'/':
case'^':
while(precedence(stack[top])>=prcedence(symbol))
postfix[j++]=pop();
push(symbol);
break;
default:
postfix[j++]=symbol;
}}
}
void pop()
{
if(top==-1)
printf("stack Underflow\n");
else
{
printf("\nPopped element is:%d\n",stack[top]);
top=top-1;
}}
void push(char symbol)
{
int item;
if(top==(max-1))
printf("\nStack Overflow.");
else
{
top=top+1;
stack[top]=symbol;}}
int precedence(char symbol)
{
switch(symbol)
{
//higher value greater the precedence is
case'^':
return 3;
case'/':
case'*':
return 2;
case'+':
case'-':
return 1;
default:
return 0;
}}
