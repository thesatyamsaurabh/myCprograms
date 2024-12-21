#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,a[100],s=0,l=0;
 printf("no of element");
 scanf("%d",&n) ;
 printf("Enter element");
 for(i=0;i<n;i++)
                scanf("%d",&a[i]);
 s=a[0];
 for(i=0;i<n;i++)
 {
                 if(s>a[i])
                                s=a[i];
                 else
                                l=a[i];
 }
 printf("smallest and largest is %d and %d",s,l);
 getch();
}

