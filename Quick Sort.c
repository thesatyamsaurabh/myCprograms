#include<stdio.h>
#include<conio.h>
#define size 100
int partition(int a[],int beg,int end);
void quick_sort(int a[],int beg,int end);
void main()
{
int i,n,arr[size];
printf("Enter the number of elements of array:");
scanf("%d",&n);
printf("Enter the elements of array:");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
quick_sort(arr,0,n);
printf("Sorted array Is:\n");
for(i=0;i<n;i++)
printf("%d ",arr[i]);
getch();
}
int partition(int arr[],int beg,int end)
{
int i,j,pivot,temp;
pivot=arr[beg];
i=beg;j=end;
while(i<j)
{
                while(arr[i]<=pivot)
                {
                                i++;
                }
                while(arr[j]>pivot)
                {
                                j--;
                }
if(i<j)
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}}
temp=arr[beg];
arr[beg]=arr[j];
arr[j]=temp;
return j;
}
void quick_sort(int arr[],int beg,int end)
{
int j;
if(beg<end)
{
j=partition(arr,beg,end);
quick_sort(arr,beg,j-1);
quick_sort(arr,j+1,end);
}}
