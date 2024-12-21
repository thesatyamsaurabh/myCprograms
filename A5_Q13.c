#include<stdio.h>
#include<conio.h>
void main( )
{
FILE *fp ;
char ch[200]="it's me satyam line1\n saurabh line2";
int i;
if(fp==NULL){
                printf("File can't be open:");
                exit(1);
}
fp=fopen("f1.text","w");
for(i=0;i<strlen(ch);i++)
fputc(ch[i],fp);
fclose(fp);
getch();
}

