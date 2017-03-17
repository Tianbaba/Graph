//
//  Edge.hpp
//  Graph
//
//  Created by Tianyi He on 3/10/17.
//  Copyright © 2017 Tianyi He. All rights reserved.
//

#ifndef Edge_hpp
#define Edge_hpp

#include <stdio.h>
#include "Node.hpp"

class Edge {
private:
    Node& start_node;
    Node& end_node;
public:
    Edge(Node& start_node, Node& end_node);
    Node& getStartNode();
    Node& getEndNode();
};



#endif /* Edge_hpp */
