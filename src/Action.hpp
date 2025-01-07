class Action {
public:
  enum Type { FOLD, CHECK, CALL, BET, RAISE };

  Type type;
  int amount;

  Action(Type type, int amount);

  static bool isValidAction(Action action, int stack, int wager, int callAmount,
                            int minimumRaiseSize);
};
