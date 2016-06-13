main: 0_list_main.o 1_make_list.o 2_print_list.o
	gcc -o main \
		0_list_main.o \
		1_make_list.o \
		2_print_list.o 

0_list_main.o: 0_list_main.c list.h
	gcc -c 0_list_main.c
1_make_list.o: 1_make_list.c list.h
	gcc -c 1_make_list.c
2_print_list.o: 2_print_list.c list.h
	gcc -c 2_print_list.c
clean:
	rm *.o
	rm main


