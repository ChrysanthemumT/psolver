#include "Node.cpp"
#include <vector>
class ChanceNode : public Node {
public:
  enum Type {
    DEAL_TURN,
    DEAL_RIVER,
  };
  Type type;
  ChanceNode(Node *parent, Type type);
  void addChild(Node *parent, int card);
  std::vector<Node> getChildren();
  int getChildCount();
  Node getChild(int card);

private:
  int childCount = 0;
  std::vector<Node> children;
};
