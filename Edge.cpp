//
// Created by tobias on 14.10.19.
//

#include "Edge.h"

Graph::Edge::Edge(Node *from, Node *to, double cost) : from(from), to(to), cost(cost) {}



double Graph::Edge::getCost() const {
    return cost;
}

Graph::Node *Graph::Edge::getFrom() const {
    return from;
}

Graph::Node *Graph::Edge::getTo() const {
    return to;
}



