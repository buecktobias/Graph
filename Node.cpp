//
// Created by tobias on 14.10.19.
//

#include "Node.h"

#include <utility>

Graph::Node::Node(string name) : name(std::move(name)) {}


