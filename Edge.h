//
// Created by tobias on 14.10.19.
//

#ifndef GRAPH_EDGE_H
#define GRAPH_EDGE_H

#include <ostream>
#include "Node.h"
#include "Graph.h"

class Graph::Edge {
private:
    Node* from;
    Node* to;
    double cost;
    Edge(Node *from, Node *to, double cost);
    Node *getFrom() const;
    Node *getTo() const;
    [[nodiscard]] double getCost() const;

public:
    friend ostream &operator<<(ostream &os, const Graph::Edge &edge);
};

ostream &Graph::Edge::operator<<(ostream &os, const Graph::Edge &edge) {
    return os;
}



#endif //GRAPH_EDGE_H
