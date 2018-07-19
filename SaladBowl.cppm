export module SaladBowl;

import AbstractFruit;
import AbstractBowl;
import std;

export class SaladBowl : public AbstractBowl {
public:
  std::unique_ptr<AbstractFruit>
  add(std::unique_ptr<AbstractFruit> fruit) override;
};
