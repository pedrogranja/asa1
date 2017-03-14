#include "list.h"

typedef struct graphS { 
    int numNodes;
    int entryNodesNumber;
    int lastEntryNode;
    listNodeS **nodesEdges;
    queueS *path;

} graphS;

listNodeS **createNodesEdges(int numNodes);