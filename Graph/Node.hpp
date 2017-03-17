//
//  Node.hpp
//  Graph
//
//  Created by Tianyi He on 3/10/17.
//  Copyright © 2017 Tianyi He. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>
#include <string>
#include <iostream>

class Node {
private:
    std::string& node_name;
    std::string& node_info;
public:
    Node(std::string name);
    std::string& getName();
    std::string& getInfo();
    
};



#endif /* Node_hpp */
