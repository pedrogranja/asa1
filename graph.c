#include "list.h"
#include "graph.h"

graphS* initializeGraph(int numNodes){
	graphS* graph = (graphS*) malloc(sizeof(graphS));
	graph->entrysNodes = (int*) malloc(numNodes * sizeof(int));
	for (int i = 0; i <= numNodes; i++){
		graph->entrysNodes[i] = 0;
	}
	graph->path = (int*) malloc(numNodes * sizeof(int));
	graph->nodesEdges = createNodesEdges(graph->numNodes);

}

listNodeS **createNodesEdges(int numNodes){
	listNodeS** nodesEdges = (listNodeS**) malloc((numNodes+1) * sizeof(listNodeS*));
	for (int i = 0; i <= numNodes; i++){
		nodesEdges[i] = createListNode(i);
	}
   	return nodesEdges;
 }

void freeMemory(graphS* graph){
}

void addEdge(graphS* graphS, int fromNode, int toNode){
	addListNode(graphS->nodesEdges[fromNode], toNode);
	graphS->entrysNodes[toNode]+=1;
}

int testEntryArch(int* entrysNodes, int node){
	return entrysNodes[node] == 0;
}

void deleteEntryArchs(graphS* graph, int node){
	for (listNodeS* i = graph->nodesEdges[node];i->next != NULL;i = i->next)
		graph->entrysNodes[i->node]-=1;
}


