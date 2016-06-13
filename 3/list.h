#include<stdio.h>
#include<stdlib.h>

struct list
{
	char value;
	struct list *next;
};

struct list *my_list;

void make_list();
void print_list();


