//insert.c
#include"header.h"
NODE *insert(NODE *ptr)
{
	NODE *newnode=NULL,*temp;
	char temp_name[20];
	char choice;
	while(getchar()!='\n'&&getchar()!=EOF);
	printf("STEP1: provide new contact name: ");
	if(fgets(temp_name,sizeof(temp_name),stdin)!=NULL)
	{
		temp_name[strcspn(temp_name, "\n")]=0;
	}
	if(strlen(temp_name)==0)
	{
		printf("Error:Name cannot be empty!\n");
		return ptr;
	}
	temp=ptr;
	while(temp!=NULL)
	{
			if(strcmp(temp->name,temp_name)==0)
		{
			printf("Error: contact with name '%s' already exists! Duplicate contacts are  not allowed.\n",temp_name);
			return ptr;
		}
		temp=temp->link;
	}
	newnode=calloc(1,sizeof(NODE));
	strcpy(newnode->name,temp_name);
	printf("Enter the roll/ID: ");
	scanf("%d",&newnode->roll);
	newnode->phone_count=0;
	printf("Enter number-1: ");
       scanf("%s",newnode->phone[newnode->phone_count++]);
        while(1)
	{
	 printf("Do you want to add another number to the same name: (Y/N)\n");
         __fpurge(stdin);
scanf(" %c",&choice);
if(choice=='Y'||choice=='y')
{
	if(newnode->phone_count<5)
	{
		printf("Enter another number: ");
		scanf("%s",newnode->phone[newnode->phone_count++]);
	}
	else
	{
		printf("maximum number limit reached for this contact.\n");
		break;
	}
}
else if(choice=='N'||choice=='n')
{
	break;
}
else
{
	printf("Invalid choice.Please enter Y/y or N/n.\n");
}
}
newnode->email_count=0;
printf("Do you want to add email: (Y/N)\n");
__fpurge(stdin);
scanf(" %c",&choice);
if(choice=='Y'||choice=='y')
{
	printf("Enter email: ");
	scanf("%s",newnode->email[newnode->email_count++]);
}
printf("Do you want to add address: (Y/y)\n");
__fpurge(stdin);
scanf(" %c",&choice);
if(choice=='Y'||choice=='y')
{
	printf("Enter address: ");
	scanf("%s",newnode->address);
}
else
{
        strcpy(newnode->address,"N/A");
}
newnode->link=NULL;
if(ptr==NULL)
{
	ptr=newnode;
}
else
{
	temp=ptr;
	while(temp->link)
	{
		temp=temp->link;
	}
	temp->link=newnode;
}
printf("Contacts successfully created!\n");
return ptr;
}
