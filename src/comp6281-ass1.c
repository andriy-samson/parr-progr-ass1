/*
 ============================================================================
 Name        : comp6281-ass1.c
 Author      : andriy samson
 Version     :
 Copyright   : comp6281/2 @andriy samsonyuk
 Description : Ass-1
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "an_vector.h"

int main(void) {
	puts(">>> Started");

	// declare and initialize a new vector
	AnVector vector;
	vector_init(&vector);

	// fill it up with 150 arbitrary values
	// this should expand capacity up to 200
	int i;
	for (i = 200; i > -50; i--) {
		vector_append(&vector, i);
	}

	// print out an arbitrary value in the vector
	printf("vector size is: %d\n", vector.size);
	printf("vector capacity is: %d\n", vector.capacity);
	printf("Heres the value at 27: %d\n", vector_get(&vector, 27));

	// we're all done playing with our vector,
	// so free its underlying data array
	vector_free(&vector);

	puts(">>> End");
	return EXIT_SUCCESS;
}
