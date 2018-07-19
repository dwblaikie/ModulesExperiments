
#pragma once

#include "AbstractBowl.h"
#include "AbstractFruit.h"

#include <memory>

class SaladBowl : public AbstractBowl {
public:
  std::unique_ptr<AbstractFruit>
  add(std::unique_ptr<AbstractFruit> fruit) override;
};
