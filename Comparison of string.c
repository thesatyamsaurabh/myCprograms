#include<stdio.h>
#include<conio.h>
void main()
{
char str1[50],str2[50];
int result=0,i;
printf("Enter the first string:");
gets(str1);
printf("Enter the second string:");
gets(str2);
for(i=0;str1[i]!='\0'||str2[i]!='\0';i++)
{
                if(str1[i]!=str2[i])
                      {
                                      result=1;
                break;
                      }
}
if(result==0)
printf("The strings are equal:\n");
else
printf("The string are not equal:");
getch();
}
