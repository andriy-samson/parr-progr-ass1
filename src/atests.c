/*
 * atests.c
 *
 *  Created on: Sep 23, 2015
 *      Author: sem
 */
#include "atests.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "avector.h"

void test1_run(void) {

	puts(">>> test1 Started");

	char **array = malloc(100 * sizeof(char *));
	char * temp = "aaabbbccc";
	array[0] = malloc(strlen(temp) + 1);
	strcpy(array[0], temp);
	printf("value is: %s\n", array[0]);

	Avector vector;
	avector_init(&vector);

	int i;
	for (i = 0; i < 150; i++) {
		char buf[12];
		sprintf(buf, "test1_%d_suff", i);
		avector_append(&vector, buf);
	}

	// print out an arbitrary value in the vector
	printf("vector size is: %d\n", vector.size);
	printf("vector capacity is: %d\n", vector.capacity);
	printf("Heres the value at 0: %s\n", avector_get(&vector, 0));
	printf("Heres the value at 1: %s\n", avector_get(&vector, 1));
	printf("Heres the value at 2: %s\n", avector_get(&vector, 2));
	for (i = 0; i < vector.size; i++) {
		printf(">>>: %s\n", avector_get(&vector, i));
	}

	// we're all done playing with our vector,
	// so free its underlying data array
	avector_free(&vector);
	puts(">>> test1 End");
}

