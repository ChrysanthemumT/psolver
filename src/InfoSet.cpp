#include "InfoSet.hpp"
#include <string>
#include <vector>

std::vector<double> InfoSet::getStrategy(double realisationWeight) {
  double normalisingSum = 0.0;
  for (size_t i = 0; i < currentStrategy.size(); i++) {
    if (regretSum[i] > 0) {
      currentStrategy[i] = regretSum[i];
    } else {
      currentStrategy[i] = 0;
    }
    normalisingSum += currentStrategy[i];
  }
  if (normalisingSum > 0) {
    for (size_t i = 0; i < currentStrategy.size(); i++) {
      currentStrategy[i] /= normalisingSum;
      strategySum[i] += realisationWeight * currentStrategy[i];
    }
  } else {
    double prob = 1.0 / currentStrategy.size();
    std::fill(currentStrategy.begin(), currentStrategy.end(), prob);
  }

  return currentStrategy;
}

std::vector<double> InfoSet::getAverageStrategy() const {
  std::vector<double> averageStrategy(strategySum.size());
  double normalisingSum = 0.0;
  for (double sum : strategySum) {
    normalisingSum += sum;
  }
  if (normalisingSum > 0) {
    for (size_t i = 0; i < strategySum[i]; i++) {
      averageStrategy[i] = strategySum[i] / normalisingSum;
    }
  } else {
    double prob = 1.0 / strategySum.size();
    std::fill(averageStrategy.begin(), averageStrategy.end(), prob);
  }
  return averageStrategy;
}

void InfoSet::updateRegrets(const std::vector<double> &regrets) {
  for (size_t i = 0; i < regretSum.size(); i++) {
    regretSum[i] += regrets[i];
  }
}
