#include "Action.hpp"
#include "Node.cpp"
#include <vector>

class ActionNode : Node {
public:
  /* Adapted from trainer Module */
  int numHands;
  int numActions;
  std::vector<float> getAverageStrategy();
  std::vector<float> getCurrentStrategy();
  void updateCumRegretPartOne(std::vector<float> actionUtils, int actionIndex);
  void updateCumRegretPartTwo(std::vector<float> actionUtils,
                              int iterationCount);
  void updateCumStrategy(std::vector<float> strategy,
                         std::vector<float> reachProbs, int iterationCount);
  /* Adapted from ActionNode */
  ActionNode(Node *parent, int player);
  void initialize();

private:
  std::vector<float> cumRegret;
  std::vector<float> cumStrategy;
  std::vector<Node> children;
  std::vector<Action> actions;
  int player;
};
