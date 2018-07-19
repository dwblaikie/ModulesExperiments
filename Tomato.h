#ifndef TOMATO_H
#define TOMATO_H

#include "AbstractFruit.h"

class Tomato : public AbstractFruit {
public:
  void setSize(int size);
  int size() const;

  bool isForFruitSalad() const override;

private:
  int m_size = 1;
};

#endif
