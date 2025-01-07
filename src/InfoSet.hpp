#include <string>
#include <vector>

class InfoSet {
public:
  InfoSet(const std::string infoSetKey, size_t numActions)
      : key(infoSetKey), regretSum(numActions, 0.0),
        strategySum(numActions, 0.0), currentStrategy(numActions, 0.0) {}
  std::vector<double> getStrategy(double);
  std::vector<double> getAverageStrategy() const;
  void updateRegrets(const std::vector<double> &);

private:
  std::string key;
  std::vector<double> regretSum;
  std::vector<double> strategySum;
  std::vector<double> currentStrategy;
};
