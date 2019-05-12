#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int info;
	struct node *next;
}*front,*rear,*temp,*front1;

void main()
{
	int no,ch,choice,e;
	do
	{
		printf("Enter choice\n1.Insertion\n2.Deletion\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter data:\n");
				scanf("%d",&no);
				insert(no);
				break;
			case 2:
				delete();
				break;
		}
		printf("Do you want to continue:1.Yes\n");
		scanf("%d",&ch);
	}while(ch==1);
	front1=front;
	if(front1==NULL && rear==NULL)
	printf("Empty list");
	while(front1!=rear)
	{
		printf("%d",front1->info);
		front1=front1->next;
	}
	if(front1==rear)
	printf("%d",front1->info);
}
void insert(int data)
{
	if(rear==NULL)
	{
		rear=(struct node*)malloc(sizeof(struct node));
		rear->next=NULL;
		rear->info=data;
		front=rear;
	}
	else
	{
		temp=(struct node*)malloc(sizeof(struct node));
		rear->next=temp;
		temp->info=data;
		temp->next=NULL;
		rear=temp;
	}

}
void delete()
{
	front1=front;
	if(front1==NULL)
	printf("error");
	else
	{
	    if(front1->next!=NULL)
	    {
	    	front1=front1->next;
	    	free(front);
	    	front=front1;
		}		
}
}
