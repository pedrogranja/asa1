#include "Graph.h"

Graph::Graph(int numVertices)
{
	nodeList.resize(numVertices+1);
}

Graph::~Graph()
{
}

void Graph::makeConnection(Node* node1,Node* node2) {
	nodeList[node1->value].emplace_back(node2);
	node2->numConnections++;
}

std::list<Node*>* Graph::getEdgesList(Node* node) {
	return &nodeList[node->value];
}
