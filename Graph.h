//
// Created by tobias on 14.10.19.
//

#ifndef GRAPH_GRAPH_H
#define GRAPH_GRAPH_H


#include "Node.h"
#include "Edge.h"
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <ostream>


using namespace std;


class Graph {
private:
    class Edge;
    class Node;
    unsigned long amountOfEdges;
    unsigned long amountOfVertices;
    unordered_map<string, Node*> unorderedMap;
    unordered_set<Edge> edges;
    void addEdge(Edge edge);
    void addNode(Node* node);
public:
    explicit Graph(unsigned long size);
    explicit Graph();
    void addNode(const string& nodeName);
    void addEdge(const string& nodeName1, const string& nodeName2, double cost, bool bothDirections);
    Node* getNode(string nodeName) const;
    friend ostream &operator<<(ostream &os, const Graph &graph);
};



#endif //GRAPH_GRAPH_H
