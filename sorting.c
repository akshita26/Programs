#include<stdio.h>
#include<conio.h>


void main()
{
	int arr[20],n,c,d,swap;
	printf("Enter number");
	scanf("%d", &n);
	
	for(c=0;c<n;c++)
	scanf("%d", &arr[c]);
	
	for(c=0;c<n-1;c++)
	{
		for(d=0;d<n-c-1;d++)
		{
			if(arr[d]>arr[d+1])
			{
				swap=arr[d];
				arr[d]=arr[d+1];
				arr[d+1]=swap;
				
			}
		}
	}
	printf("Sorted");
	for(c=0;c<n;c++)
	printf("%d", arr[c]);
}
