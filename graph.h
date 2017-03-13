#include "list.h"

typedef struct graphS { 
    int numNodes;
    int * entrysNodes;
    listNodeS **nodesEdges;
    queueS *path;

} graphS;

listNodeS **createNodesEdges(int numNodes);