#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n,r,i=0,j,k,s=0;
	char hexa[50];
	printf("Enter your Binary number:");
	scanf("%d",&n);
	while(n>0)
	{
   r=n%10;
   s=s+pow(2,i)*r;
   i++;
   n=n/10;
	}
	printf("Decimal number=%d",s);
	while(s>0)
	{
		k=s%16;
		if(k<10)
		k=k+48;
		else
		k=k+55;
		hexa[i++]=k;
		s=s/16;
	}
	printf("\nHexadecimal Number:");
	for(j=i-1;j>0;j--)
	{
		printf("%c",hexa[j]);
	}
	return 0;
	getch();

}
