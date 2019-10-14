//
// Created by tobias on 14.10.19.
//

#ifndef GRAPH_NODE_H
#define GRAPH_NODE_H
#include <string>
#include <ostream>
#include "Graph.h"

using namespace std;

class Graph::Node {
private:
    string name;
public:
    explicit Node(string name);

    friend ostream &operator<<(ostream &os, const Graph::Node &node);
};

ostream &Graph::Node::operator<<(ostream &os, const Graph::Node &node) {
    os << node.name;
    return os;
}

#endif //GRAPH_NODE_H
