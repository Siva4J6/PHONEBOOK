//edit.c
#include"header.h"
NODE *edit_contacts(NODE *ptr)
{
	char target[20];
	printf("Enter the name of the contact to edit: ");
	scanf("%s",target);
	NODE *temp=ptr;
	while(temp!=NULL)
	{
		if(strcmp(temp->name,target)==0)
		{
		printf("Contact found.Enter new details:\n");
			printf("Enter new roll/ID: ");
		scanf("%d", &temp->roll);
	        temp->phone_count=0;
	        printf("enter new phone number-1: ");
	scanf("%s",temp->phone[temp->phone_count++]);
        printf("enter new email: ");
scanf("%s",temp->email[0]);
temp->email_count=1;
printf("enter the new address: ");
scanf("%s",temp->address);
printf("contact updated successfully.\n");
return ptr;
		}
		temp=temp->link;
	}
	printf("contact '%s' not found for editing\n",target);
	return ptr;
}

