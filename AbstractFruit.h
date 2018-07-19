
#pragma once

class AbstractFruit {
public:
  void grow();

  virtual bool isForFruitSalad() const = 0;
};
