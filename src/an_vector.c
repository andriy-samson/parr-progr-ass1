/*
 * an_vector.c
 *
 *  Created on: Sep 22, 2015
 *      Author: sem
 */

#include <stdio.h>
#include <stdlib.h>
#include "an_vector.h"

void vector_init(AnVector *vector) {
	vector->size = 0;
	vector->capacity = INITIAL_CAPACITY;
	vector->data = malloc(sizeof(int) * vector->capacity);
}

void vector_append(AnVector *vector, int value) {
	vector_resize(vector);
	vector->data[vector->size++] = value;
}

int vector_get(AnVector *vector, int index) {
	if (index >= vector->size || index < 0) {
		printf("Index %d out of bounds for vector of size %d\n", index, vector->size);
		exit(1);
	}
	return vector->data[index];
}

void vector_resize(AnVector *vector) {
	if (vector->size >= vector->capacity) {
		vector->capacity *= 2;
		vector->data = realloc(vector->data, sizeof(int) * vector->capacity);
	}
}

void vector_free(AnVector *vector) {
	free(vector->data);
}

