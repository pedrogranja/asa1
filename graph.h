#include "list.h"

typedef struct graphS { 
    int numNodes;
    int * entrysNodes;
    listNodeS **nodesEdges;
    int *path;

} graphS;

listNodeS **createNodesEdges(int numNodes);