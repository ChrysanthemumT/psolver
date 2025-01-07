#include <string>

class Card {
public:
  enum Suit { CLUBS, DIAMONDS, HEARTS, SPADES };
  enum Rank {
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING,
    ACE
  };
  Card(Rank rank, Suit suit);
  Suit getSuit();
  Rank getRank();

private:
  Suit suit;
  Rank rank;
};
