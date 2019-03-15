#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,a[10];
	int ls,bs;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	printf("Enter element to be searched:\n");
	scanf("%d",&n);
    ls=linear(a,n);
    if(ls)
    printf("Element found at %d\n", ls);
    else
    printf("Element not found");
    bs=binary(a,n);
    if(bs)
    printf("Element found at %d", bs);
    else
    printf("Element not found"); 
	return 0;
}
int linear(int a[],int n)
{
	int i;
		for(i=0;i<10;i++)
	{
		if(a[i]==n)
		return i+1; //incrementing
	}
	return 0;
}
int binary(int a[],int n)
{
	int start=0, end=9;             
	int mid=(start+end)/2;
	while(start<=end)
	{
		if(a[mid]==n)
		return mid+1;
		else if(a[mid]<n)
		start=mid+1;
		else
		end=mid-1;
		
	mid=(start+end)/2;
	}
return 0;	
	
}

