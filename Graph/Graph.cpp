//
//  Graph.cpp
//  Graph
//
//  Created by Tianyi He on 3/10/17.
//  Copyright © 2017 Tianyi He. All rights reserved.
//
#include <list>
#include "Graph.hpp"
#include "Node.hpp"
#include "Edge.hpp"

Graph::Graph() {
    this->_nodes = std::list<Node>();
    this->_edges = std::list<Edge>();
}

void Graph::addNode(std::string node_name) {
    Node new_node = Node(node_name);
    this->addNode(new_node);
}

void Graph::addNode(Node new_node) {
    this->_nodes.push_back(new_node);
}

void Graph::addEdge(Node& start, Node& end) {
    Edge new_edge = Edge(start, end);
    this->addEdge(new_edge);
}

void Graph::addEdge(Edge new_edge) {
    this->_edges.push_back(new_edge);
}

std::list<Node> Graph::getNodes() {
    return this->_nodes;
}

std::list<Edge> Graph::getEdges() {
    return this->_edges;
}
