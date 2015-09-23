/*
 * an_vector.h
 *
 *  Created on: Sep 22, 2015
 *      Author: sem
 */

#ifndef AN_VECTOR_H_
#define AN_VECTOR_H_


#define INITIAL_CAPACITY 100

// Define a vector type
typedef struct {
  int size;
  int capacity;
  int *data;
} AnVector;

void vector_init(AnVector *vector);

void vector_append(AnVector *vector, int value);

int vector_get(AnVector *vector, int index);

void vector_resize(AnVector *vector);

void vector_free(AnVector *vector);

#endif /* AN_VECTOR_H_ */
