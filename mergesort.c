#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a[20],j;
	printf("Enter the number of elements:\n");
	scanf("%d", &n);
	printf("Elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	divide(a,0,n-1);
	printf("Sorted list:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
void divide(int a[],int start,int end)
{
	int mid;
	if(start!=end)
	{
	mid=(start+end)/2;
	divide(a,start,mid);
	divide(a,mid+1,end);
	merge(a,start,mid,end);
}
}
void merge(int a[],int start,int mid,int end)
{
	int i=start;
	int j=mid+1;
	int k=start;
	int temp[20];
	while(i<=mid && j<=end)
	{
		if(a[i]<=a[j])
		temp[k++]=a[i++];
		else
		temp[k++]=a[j++];
	}
	while(i<=mid)
	temp[k++]=a[i++];
	while(j<=end)
	temp[k++]=a[j++];
	
	for(i=start;i<=end;i++)
	a[i]=temp[i];
	
}
