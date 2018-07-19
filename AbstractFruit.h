#ifndef ABSTRACT_FRUIT_H
#define ABSTRACT_FRUIT_H

class AbstractFruit {
public:
  void grow();

  virtual bool isForFruitSalad() const = 0;
};

#endif
