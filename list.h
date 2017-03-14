#include <stdio.h>
#include <stdlib.h>

#ifndef LIST_H_
#define LIST_H_

typedef struct ListNodeS {
  	int node;
  	struct listNodeS *next;
} listNodeS;

typedef struct QueueS{
	listNodeS* head;
	listNodeS* tail;
} queueS;


listNodeS *createListNode(int node);
queueS *createQueue();
void addListNode(listNodeS* nodeEdges, int node);
void enqueue(queueS* queue, int node);
int dequeue(queueS* queue);

#endif