#include "Action.hpp"
#include "InfoSet.hpp"
#include "Node.cpp"
#include <vector>

class ActionNode : Node {
public:
  /* Adapted from trainer Module */
  int numHands;
  int numActions;
  /* Adapted from ActionNode */
  ActionNode(Node *parent, int player);
  void initialize();

private:
  std::vector<Node> children;
  std::vector<Action> actions;
  InfoSet *infoSet;
  int player;
};
