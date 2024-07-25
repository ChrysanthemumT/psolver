#include "Node.cpp"

class TerminalNode : public Node {
public:
  enum Type {
    ALLIN,
    UNCONTESTED,
    SHOWDOWN,
  };
  TerminalNode(Node *parent, Type type);

private:
  int pot;
  int lastToAct;
  Type type;
};
