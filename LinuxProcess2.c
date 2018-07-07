/*
 ============================================================================
 Name        : linuxc1.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int globalVariable = 10;

int main(void) {

	int    StackVariable = 200;

	puts("!!!Hello World!!!"); 			/* prints !!!Hello World!!! */

	printf("Hello\n");


	sleep(5);

	pid_t PidID = fork();

	if (PidID == 0)                // child
	{
		puts("Child process");
		globalVariable = 20;
		StackVariable = 300;

	}
	else if(PidID < 0)
	{
		puts("Fork Failed");
	}
	else
	{
		puts("Parent process");
		globalVariable = 30;
		StackVariable = 500;
	}

	printf("global = %d \n",globalVariable);
	printf("Satck = %d \n",StackVariable);



	return EXIT_SUCCESS;
}
