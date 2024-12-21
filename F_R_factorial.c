int fact(int);
void main()
{ int f, n;
printf("\nENTER A NUMBER: ");
scanf("%d",&n);
f=fact(n);
printf("\nFACTORIAL OF %d IS %d", n, f);
}
int fact(int a)
{ int fac;
if(a==1 || a==0)
return(1);
else
fac=a*fact(a-1);
return(fac);
}
