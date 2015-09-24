/*
 * an_vector.c
 *
 *  Created on: Sep 22, 2015
 *      Author: sem
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "avector.h"

void avector_init(Avector *vector) {
	vector->size = 0;
	vector->capacity = INITIAL_CAPACITY;
	vector->data = malloc(sizeof(int) * vector->capacity);
	vector->data = malloc(vector->capacity * sizeof(char *));
}

void avector_append(Avector *vector, char *value) {
	avector_resize(vector);
	char *copy =  malloc(strlen(value) + 1);
	strcpy(copy, value);
	vector->data[vector->size++] = copy;
}

char* avector_get(Avector *vector, int index) {
	if (index >= vector->size || index < 0) {
		printf("Index %d out of bounds for vector of size %d\n", index, vector->size);
		exit(1);
	}
	return vector->data[index];
}

void avector_resize(Avector *vector) {
	if (vector->size >= vector->capacity) {
		vector->capacity *= 2;
		vector->data = realloc(vector->data, sizeof(char *) * vector->capacity);
	}
}

void avector_free(Avector *vector) {

	int i;
	for(i=0; i< vector->size; i++)
		free(vector->data[i]);

	free(vector->data);
}

