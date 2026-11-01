//find.c
#include"header.h"
void find_contacts(NODE *ptr)
{
	char target[20];
	printf("Enter the name to find: ");
	scanf("%s",target);
	NODE *temp=ptr;
	while(temp!=NULL)
	{
		if(strcmp(temp->name,target)==0)
		{
			printf("\nContact found!\n");
			printf("Roll/ID : %d\n",temp->roll);
			printf("Name    : %s\n",temp->name);
			for(int i=0;i<temp->phone_count;i++)
			{
				printf("Phone-%d : %s\n",i+1,temp->phone[i]);
			}
			if(temp->email_count>0)
			{
				printf("Email   : %s\n",temp->email[0]);
				printf("Address : %s\n",temp->address);
				return;
			}
		}
			temp=temp->link;
	}
		printf("Contacts '%s' not found in the phonebook: \n",target);
}

