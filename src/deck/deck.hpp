#include "card.hpp"
#include <vector>

class Deck {
public:
  Deck();
  void shuffle();

private:
  std::vector<Card> library;
};
