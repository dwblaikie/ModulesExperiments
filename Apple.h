
#pragma once

#include "AbstractFruit.h"

class Apple : public AbstractFruit {
public:
  void setColorIndex(int colorIndex);
  int colorIndex() const;

  bool isForFruitSalad() const override;

private:
  int m_colorIndex = 0;
};
