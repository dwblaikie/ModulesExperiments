export module Grape;
import AbstractFruit;

export class Grape : public AbstractFruit {
public:
  void setSeedless(int seedless);
  int seedless() const;

  bool isForFruitSalad() const override;

private:
  int m_seedless = 0;
};
