#ifndef GRAPE_H
#define GRAPE_H

#include "AbstractFruit.h"

class Grape : public AbstractFruit {
public:
  void setSeedless(int seedless);
  int seedless() const;

  bool isForFruitSalad() const override;

private:
  int m_seedless = 0;
};

#endif
