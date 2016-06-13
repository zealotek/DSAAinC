#include"list.h"

void print_list()
{
	if(my_list == NULL)
	{
		printf("NULL list\n");
	}
	struct list *p_list = my_list;
	while(p_list != NULL)
	{
		printf("->%c",p_list->value);
		p_list = p_list->next;
	}	
	printf("\n");
}


