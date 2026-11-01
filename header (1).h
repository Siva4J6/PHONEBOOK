//header.h
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio_ext.h>
typedef struct node
{
	int roll;
	char name[20];
	char phone[5][15];
	int phone_count;
	char email[5][30];
	int email_count;
	char address[50];
	struct node *link;
}NODE;
NODE *save_from_file(NODE *ptr);
void save(NODE *ptr);
void print(NODE *ptr);
NODE *insert(NODE *ptr);
void find_contacts(NODE *ptr);
NODE *delete_contacts(NODE *ptr);
NODE *edit_contacts(NODE *ptr);
