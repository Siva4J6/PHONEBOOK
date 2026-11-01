#include"header.h"
NODE *insert(NODE *ptr)
{
  NODE *newnode=NULL,*temp;
  newnode=calloc(1,sizeof(NODE));
  printf("enter the roll\n");
  scanf("%d",&newnode->roll);
  printf("enter name\n");
  scanf("%s",newnode->name);
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

}
