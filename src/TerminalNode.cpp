#include "TerminalNode.hpp"

TerminalNode::TerminalNode(Node *parent, Type type) : Node(parent) {
  pot = 0;
  this->type = type;
}
