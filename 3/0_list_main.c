#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
	int opt = 1;
	printf("test begin!\n");
	while(opt != 0)
	{
		printf("MENU\n");
		printf("1.make\n");
		printf("2.print\n");
		printf("3.\n");
		printf("0.exit\n");

		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				printf("make list begin\n");
				make_list();
				break;
			case 2:
				printf("print list begin\n");
				print_list();
				break;
			case 3:
				//func_3();
				break;
			case 0:
				break;
		}
	}
	printf("test end!\n");
	return 0;
}

