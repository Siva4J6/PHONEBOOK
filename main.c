#include"header.h"
int main()
{
  char choice;
  NODE *head=NULL;
  head=sync_from_file(head);
  while(1)
  {
    printf("i:insert d:delete p:print d:del e:exit\n");
    printf("enter te cxhoice\n");
    __fpurge(stdin);
    scanf("%c",&choice);
    switch(choice)
    {
      case 'i':head=insert(head);
	       break;
      case 'p':print(head);
	       break;
      case 's':save(head);
	       break;
      case 'e':exit(0);
    }
  }
}
