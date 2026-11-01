#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio_ext.h>
typedef struct node 
{
  int roll;
  char name[20];
  struct node *link;
}NODE;
NODE *sync_from_file(NODE *ptr);
void save(NODE *ptr);
void print(NODE *ptr);
NODE *insert(NODE *ptr); 


