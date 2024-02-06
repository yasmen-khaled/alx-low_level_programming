#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

/* LIBRARIES */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


typedef struct listint_s
{
		int n;
			size_t index;
				struct listint_s *next;
} listint_t;



typedef struct skiplist_s
{
		int n;
			size_t index;
				struct skiplist_s *next;
					struct skiplist_s *express;
} skiplist_t;


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif
