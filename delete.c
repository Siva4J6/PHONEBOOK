//delete.c
#include"header.h"
NODE *delete_contacts(NODE *ptr)
{
	char target[20];
	printf("Enter the name of the contact to delete: ");
	scanf("%s",target);
	NODE *temp=ptr,*prev=NULL;
	if(ptr==NULL)
	{
		printf("Phonebook is empty.\n");
		return ptr;
	}
	if(strcmp(ptr->name,target)==0)
	{
		ptr=ptr->link;
		free(temp);
		printf("Contact '%s' deleted succesfully\n",target);
		return ptr;
	}
	while(temp!=NULL&& strcmp(temp->name,target)!=0)
	{
		prev=temp;
		temp=temp->link;
	}
	if(temp==NULL)
	{
		printf("Contact '%s' not found.\n",target);
	}
	else
	{
		prev->link=temp->link;
		free(temp);
		printf("Contact '%s' deleted successfully\n",target);
	}
	return ptr;
}

