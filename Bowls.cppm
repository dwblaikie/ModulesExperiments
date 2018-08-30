export module Bowls;

import std;
import AbstractFruit;

export class AbstractBowl {
public:
  AbstractBowl() = default;
  AbstractBowl &operator=(AbstractBowl const &) = delete;
  AbstractBowl(AbstractBowl const &) = delete;
  ~AbstractBowl();

  std::unique_ptr<AbstractFruit> takeAt(int index);

  /// Add a fruit to the bowl.
  /// Return the fruit to you if it is not accepted. Return an empty unique_ptr
  /// otherwise
  virtual std::unique_ptr<AbstractFruit>
  add(std::unique_ptr<AbstractFruit> fruit) = 0;

  int size() const { return m_fruits.size(); }

protected:
  void doAdd(std::unique_ptr<AbstractFruit> fruit);

private:
  std::vector<std::unique_ptr<AbstractFruit>> m_fruits;
};

export class FruitBowl : public AbstractBowl {
public:
  FruitBowl();
  ~FruitBowl();

  std::unique_ptr<AbstractFruit>
  add(std::unique_ptr<AbstractFruit> fruit) override;
};

export class SaladBowl : public AbstractBowl {
public:
  std::unique_ptr<AbstractFruit>
  add(std::unique_ptr<AbstractFruit> fruit) override;
};
