//main.c
#include"header.h"
int main()
{
	char choice;
	NODE *head=NULL;
	head=save_from_file(head);
	while(1)
	{
		printf("\n---------------------------------------------\n");
		printf("                PHONE BOOK APP                 \n");
		printf("-----------------------------------------------\n");
		printf("C/c : Create a new contact\n");
		printf("P/p : Print all contacts\n");
		printf("F/f : Find contacts\n");
		printf("D/d : Delete contacts\n");
		printf("E/e : Edit a contacts\n");
		printf("S/s : To save the contacts in the file \n");
		printf("Q/q : Quit from app\n");
		printf("-----------------------------------------------\n");
		printf("enter your choice: ");
		__fpurge(stdin);
		scanf(" %c",&choice);
		switch(choice)
		{
			case'c':
			case'C':
				head=insert(head);
				break;
			case'p':
			case'P':
				print(head);
				break;
			case'f':
			case'F':
				find_contacts(head);
				break;
			case'd':
			case'D':
				head=delete_contacts(head);
				break;
			case'e':
		        case'E':
				head=edit_contacts(head);
				break;
			case's':
			case'S':
				save(head);
				break;
			case'q':
			case'Q':
				save(head);
				exit(0);
			default:
				printf("Invalid choice! Please try again.\n");
		}
	}
}

