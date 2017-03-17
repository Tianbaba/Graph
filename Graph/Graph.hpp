//
//  Graph.hpp
//  Graph
//
//  Created by Tianyi He on 3/10/17.
//  Copyright © 2017 Tianyi He. All rights reserved.
//

#ifndef Graph_hpp
#define Graph_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include <list>

#include "Node.hpp"
#include "Edge.hpp"

class Graph {
private:
    std::list<Node> _nodes;
    std::list<Edge> _edges;
public:
    Graph();
    void addNode(std::string node_name);
    void addNode(Node new_node);
    void addEdge(Node& start, Node& end);
    void addEdge(Edge new_edge);
    std::list<Node> getNodes();
    std::list<Edge> getEdges();
};


#endif /* Graph_hpp */
