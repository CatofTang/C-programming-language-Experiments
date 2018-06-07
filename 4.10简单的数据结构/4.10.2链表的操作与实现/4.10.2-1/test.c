#include "stdio.h"
#include "malloc.h"
typedef struct node
{
	char data;
	struct node *next;
}Linklist;
main()
{
	Linklist *head,*p,*s;
	char ch;
	head=(Linklist *)malloc(sizeof(Linklist));
	p=head;
	while((ch=getchar()) != '\n')
	{
		s=(Linklist *)malloc(sizeof(Linklist));
		s->data=ch;
		p->next=s;
		p=s;
	}
	p->next=NULL;
	/*显示各元素*/
	p=head->next;
	printf("目前链表元素为:\n");
	while(p!=NULL)
	{printf("(%c)---",p->data);
	p=p->next;
	}
	putchar(94);
	putchar('\n');
}