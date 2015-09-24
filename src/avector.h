/*
 * avector.h
 *
 *  Created on: Sep 22, 2015
 *      Author: sem
 */

#ifndef AVECTOR_H_
#define AVECTOR_H_


#define INITIAL_CAPACITY 100

// Define a vector type
typedef struct {
  int size;
  int capacity;
  char **data;
} Avector;

void avector_init(Avector *vector);

void avector_append(Avector *vector, char *value);

char* avector_get(Avector *vector, int index);

void avector_resize(Avector *vector);

void avector_free(Avector *vector);

#endif /* AN_VECTOR_H_ */
