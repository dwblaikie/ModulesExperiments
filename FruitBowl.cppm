export module FruitBowl;

import AbstractFruit;
import AbstractBowl;
import std;

export class FruitBowl : public AbstractBowl {
public:
  FruitBowl();

  std::unique_ptr<AbstractFruit>
  add(std::unique_ptr<AbstractFruit> fruit) override;
};
