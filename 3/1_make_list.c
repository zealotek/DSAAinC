#include"list.h"

void make_list()
{
	char input;
	struct list *new_node;
	struct list *list_tail = NULL;
	while(1)
	{
		scanf("%c", &input);
		if(input == '0')
		{
			break;
		}
		new_node = (struct list *)malloc(sizeof(struct list));
		new_node->next = NULL;
		new_node->value = input;

		if(my_list == NULL)
		{
			list_tail = new_node;
			my_list = new_node;
		}
		else
		{
			list_tail->next = new_node;
			list_tail = new_node;	
		}
	}
}


