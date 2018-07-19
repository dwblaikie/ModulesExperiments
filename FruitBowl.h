
#pragma once

#include "AbstractBowl.h"
#include "AbstractFruit.h"

class FruitBowl : public AbstractBowl {
public:
  FruitBowl();

  std::unique_ptr<AbstractFruit>
  add(std::unique_ptr<AbstractFruit> fruit) override;
};
