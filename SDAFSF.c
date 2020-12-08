#include <stdio.h>
#include <stdlib.h>



struct node
{
	int data;
	struct node *left,*right;
};
struct node * minValueNode(struct node* node) 
{ 
    struct node* current = node; 
  
    /* loop down to find the leftmost leaf */
    while (current && current->left != NULL) 
        current = current->left; 
  
    return current; 
} 



struct node *insert( struct node *head, int num)
{

	if(head==NULL)
	{
		head=(struct node *)malloc(sizeof(struct node *));
		head->data=num;
		head->left=NULL;
		head->right=NULL;
		printf("%d->",head->data);
	}
else if(num<head->data)
{
	head->left = insert(head->left,num);
	
}
else if(num>head->data)
{
	head->right = insert(head->right,num);
}
	return head;
}
struct node *search(struct node *head,int k)
{
	if(head==NULL||head->data==k)
	{
		return head;
	}
	
	else if(head->data<k)
			return search(head->right,k);
	
	else if(head->data>k)
		        return search(head->left,k);
	
	
}
struct node *Delete(struct node *head,int num)
{
	if(head==NULL)
	return head;
	
	else if (num<head->data)
	  head->left=Delete(head->left,num);
	 
	else if (num>head->data)
	  head->right=Delete(head->right,num);  
	  
	 else
	 {
	 	if(head->left==NULL)
	 	{
	 		struct node *temp=head->right;
	 		free(head);
	 		return temp;
		 }
		 
		else if(head->right==NULL)
		{
			struct node *temp=head->left;
			free(head);
			return temp;
		 } 
		 else if(head->left!=NULL&&head->right!=NULL)
		 {
		 struct node *temp = minValueNode(head->right);
		 head->data = temp->data;
		 head->right=Delete(head->right,temp->data);
		 }
	 	
	  } 
}
void main()
{
    
    struct node *head=NULL,*temp;
    head = insert(head,3);
	insert(head,4);
	insert(head,5);
    insert(head,6);	 
    printf("\n");
    printf("%d",search(head,4)->data);
    printf("%d",search(head,5)->data);
    head=Delete(head,6);
      printf("%d",search(head,6));
    
}
