#ifndef _MAX_HPP
#define _MAX_HPP
#include <climits>

#include "tree.hpp"

// You will need to implement a complete visitor that
// finds the maximum element in the tree. You can use
// the print and sum visitors for reference.
class maxVisitor : public Visitor {
public:
	int max;
	maxVisitor(){
		max = INT_MIN;
	}
	
	void visitNode(Node* node);
};


#endif
