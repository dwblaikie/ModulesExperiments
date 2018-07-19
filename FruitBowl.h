#ifndef FRUIT_BOWL_H
#define FRUIT_BOWL_H

#include "AbstractBowl.h"
#include "AbstractFruit.h"

class FruitBowl : public AbstractBowl {
public:
  FruitBowl();

  std::unique_ptr<AbstractFruit>
  add(std::unique_ptr<AbstractFruit> fruit) override;
};

#endif
