#include <iostream>
#include <stdlib.h>


struct node{
	int data;
	struct node *next;
}*head;


void push(int num)
{
	if(head==NULL)
{
	head=(struct node*)malloc(sizeof(struct node));
	head->data=num;
	head->next=NULL;
		  printf("The element %d is Pushed",head->data);
}

else
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=num;
	temp->next=head;
    head=temp;
	  printf("The element %d is Pushed\n",temp->data);
}
}

void pop()
{
	 printf("\nThe element %d is poped",head->data);

	head=head->next;
	
}

void printlist()
{
	struct node *temp=head;

 do
	{
		printf("%d->",temp->data);
		temp=temp->next;
		
	}	while(temp);

}

int main()
{
	int num=4;
	push(num);
	num=5;
	push(5);
	printlist();
	pop();
	printf("\n");
		printlist();
	

return 1;
}
