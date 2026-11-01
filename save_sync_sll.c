#include"header.h"
int size=sizeof(NODE)-sizeof(NODE*);
void save(NODE* ptr)
{
        FILE*fp;
        fp=fopen("record.txt","w");
        if(ptr==NULL)
        {
                printf("no nodes to save\n");

        }
        else
        {
        while(ptr)
        {
                fwrite(ptr,size,1,fp);
                ptr=ptr->link;
        }
        }
        fclose(fp);
}
NODE*sync_from_file(NODE*ptr)
{
        FILE*fp;
        NODE t,*node,*temp;
        fp=fopen("record.txt","r");
        if(fp==NULL)
                return ptr;
        while(fread(&t,size,1,fp))
        {
                node=malloc(sizeof(NODE));
        node->roll=t.roll;//copying 't' data to node 
                strcpy(node->name,t.name);
        /*adding node to the single_linked list (adding node at end of list)*/
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
