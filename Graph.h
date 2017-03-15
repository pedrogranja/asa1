#pragma once
#include <vector>
#include <list>

typedef struct Node {
	int value;
	int preValue;
	int numConnections = 0;
} Node;

class Graph
{
public:
	Graph(int numVertices);
	~Graph();

	void makeConnection(Node* node1, Node* node2);
	std::list<Node*>* getEdgesList(Node* node);

private:
	std::vector<std::list<Node*>> nodeList;
};

