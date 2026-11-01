//print.c
#include"header.h"
void print(NODE * head)
{
	NODE *temp;
	if(head==NULL)
	{
		printf("Phonebook is empty.\n");
	}
	else
	{
		printf("\n--- ALL CONTACTS DETAILS ---\n");
		temp=head;
		while(temp!=NULL)
		{
			printf("roll/ID : %d\n",temp->roll);
			printf("Name    : %s\n",temp->name);
			for(int i=0;i<temp->phone_count;i++)
			{
				printf("phone-%d : %s\n",i+1,temp->phone[i]);
			}
			if(temp->email_count>0)
			{
				printf("Email   : %s\n",temp->email[0]);
			}
			printf("address : %s\n",temp->address);
			printf("--------------------------------------\n");
			temp=temp->link;
		}
	}
}

