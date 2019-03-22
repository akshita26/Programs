#include<stdio.h>
#include<conio.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
}*start,*ptr,*temp,*temp1,*newn, *pptr;
int main()
{
	int i,ch,choice,val,value;
	start=NULL;
	do
	{
		struct node *newc;
		printf("Enter the value of nodes\n");
		scanf("%d",&val);
		newc=(struct node*)malloc(sizeof(struct node)); //size
		newc->data=val;
		if(start==NULL)
		{
			start=newc;
			newc->next=NULL;
			newc->prev=NULL;
			ptr=start;
		}
		else
		{
			newc->data=val;
			ptr->next=newc;
			newc->prev=ptr;
			newc->next=NULL;
			ptr=newc;
		}
		printf("Do you want to continue 1.YES\n");
		scanf("%d", &ch);
	}while(ch==1);
	temp=start;
	printf("Created linked list is:\n");
	while(temp!=NULL)
	{
		printf("%d ", temp->data);
		temp=temp->next;
	}
	printf("Enter your choice\n1.Insertion at beginning\n2.Deletion at end\n");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			printf("Enter the value of new node:\n");
			scanf("%d", &value);
			newn=(struct node*)malloc(sizeof(struct node));
			newn->data=value;
			newn->next=start;
			start->prev=newn;
			newn->prev=NULL;
			start=newn;
			printf("Created linked list:\n");
			temp1=start;
			while(temp1!=NULL)
			{
				printf("%d ", temp1->data);
		        temp1=temp1->next;
			}
			break;
		case 2:
			ptr=start;
			pptr=NULL;
			while(ptr->next!=NULL)
			{
				pptr=ptr;
				ptr=ptr->next; }
			pptr->next=NULL;
			printf("Created linked list:\n");
			temp1=start;
			while(temp1!=NULL)
			{
				printf("%d ", temp1->data);
		        temp1=temp1->next;
			}break;
		
			
	}
return 0;	
}
