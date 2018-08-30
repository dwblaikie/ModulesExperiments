export module FruitSalad;
import AbstractFruit;

export class Grape : public AbstractFruit {
public:
  void setSeedless(int seedless);
  int seedless() const;

  bool isForFruitSalad() const override;

private:
  int m_seedless = 0;
};

export class Apple : public AbstractFruit {
public:
  void setColorIndex(int colorIndex);
  int colorIndex() const;

  bool isForFruitSalad() const override;

private:
  int m_colorIndex = 0;
};
