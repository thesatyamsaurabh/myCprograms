#include<stdio.h>
#include<conio.h>
int hcf(int,int,int);
int main()
{
int n1,n2,n3,h;
printf("Enter three number:");
scanf("%d%d%d",&n1,&n2,&n3);
h=hcf(n1,n2,n3);
printf("LCM=%d",h);
	return 0;
getch();
}
int hcf(int a,int b,int c)
{
	int r,k,s;
	s=a*b*c;
	r=s;
	while(r>0)
	{
	if(r%a==0&&r%b==0&&r%c==0)
	{
	k=r;
    }
    r--;
	}
    return k;
}
