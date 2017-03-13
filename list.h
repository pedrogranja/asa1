#include <stdio.h>
#include <stdlib.h>

typedef struct listNodeS {
  	int node;
  	listNodeS *next;
}listNodeS;

typedef struct queueS{
	listNodeS* head;
	listNodeS* tail;
}queueS;


listNodeS *createListNode(int node);
void addListNode(listNodeS* nodeEdges, int node);

