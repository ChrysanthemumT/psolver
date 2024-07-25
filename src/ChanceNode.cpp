#include "ChanceNode.hpp"

ChanceNode::ChanceNode(Node *parent, Type type) : Node(parent) {
  this->type = type;
  children.assign(52, 0);
}

void ChanceNode::addChild(Node *node, int card) {
  children[card] = node;
  childCount++;
}

std::vector<Node> ChanceNode::getChildren() { return children; }

int ChanceNode::getChildCount() { return childCount; }

Node ChanceNode::getChild(int card) { return children[card]; }
