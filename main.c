#include <stdio.h> 
#include "list.h"
#include "graph.h"

void test();

int main() {

	graphS* g = initializeGraph(10);
	listNodeS* list = createListNode(10);

	printf("%d",list->node);
	printf("%s","hello");


}