#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
 float p,r,ci,t;
 int n;
 printf("input the value of p,r,n");
 scanf("%f%f%d",&p,&r,&n);
 t=(1+r/100);
 ci=p*pow(t,n)-p;
 printf("compound interest=%f",ci);
 getch();
}

