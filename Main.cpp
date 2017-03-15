
#include "Graph.h"
#include <iostream>
#include <list>
#include <queue>

int main() {


	Node nodes[4];

	Graph g(4);

	nodes[0].preValue = -1;
	nodes[0].value = 1;
	nodes[1].value = 2;
	nodes[2].value = 3;
	nodes[3].value = 4;

	g.makeConnection(&nodes[0], &nodes[1]);
	g.makeConnection(&nodes[0], &nodes[2]);
	g.makeConnection(&nodes[1], &nodes[2]);
	g.makeConnection(&nodes[1], &nodes[3]);
	g.makeConnection(&nodes[2], &nodes[3]);

	for (int i = 0; i < 4; i++) {
		std::cout << nodes[i].numConnections << " ";
	}

	std::cout << "\n";

	for (int i = 0; i < 4; i++) {
		std::list<Node*> l = *g.getEdgesList(&nodes[i]);
		for (std::list<Node*>::iterator it = l.begin(); it != l.end(); ++it) {
			std::cout << (*it)->value << " ";
		}

		std::cout << "\n";
	}

	int i = 0;
	std::cin >> i;

	Node entry2;
	entry2.value = -1;
	Node* entry = &nodes[0];

	//ordenação topológica
	std::list<Node*> L;
	std::queue<Node*> Q;

	L.emplace_back(&entry2);
	Q.push(entry);

	while (!Q.empty()) {
		Node* head = Q.front();
		
		std::list<Node*>* l = g.getEdgesList(head);
		for (std::list<Node*>::iterator it = (*l).begin(); it != (*l).end(); ++it) {
			
			if (--(*it)->numConnections == 0) {
				(*it)->preValue = head->value;
				Q.push(*it);
			}

		}

		Q.pop();
		
		if (L.back()->value != head->preValue)
			std::cout << "multiple orders!!!";

		L.emplace_back(head);

	}

	for (std::list<Node*>::iterator it = ++L.begin(); it != L.end(); ++it) {
		std::cout << (*it)->value << " ";
	}

	std::cin >> i;

}