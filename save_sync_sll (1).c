//save_sync_sll.c
#include"header.h"
int size=sizeof(NODE)-sizeof(NODE*);
void save(NODE* ptr)
{
	FILE* fp;
	fp=fopen("record.txt","w");
	if(fp==NULL)
	{
		printf("Error opening file for saving.\n");
		return;
	}
	while(ptr)
	{
		fwrite(ptr,size,1,fp);
		ptr=ptr->link;
	}fclose(fp);
	printf("All contacts  saved to file successfully.\n");
}
NODE *save_from_file(NODE *ptr)
{
	FILE *fp;
	NODE t, *node,*temp;
	fp=fopen("record.txt","r");
	if(fp==NULL)
	{
		return ptr;
	}
	while(fread(&t,size,1,fp))
	{
		node=malloc(sizeof(NODE));
		*node=t;
		node->link==NULL;
		if(ptr==NULL)
			ptr=node;
		else
		{
			temp=ptr;
			while(temp->link)
				temp=temp->link;
			temp->link=node;
		}
	}
	fclose(fp);
	return ptr;
}

