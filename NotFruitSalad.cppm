export module NotFruitSalad;

import AbstractFruit;

export class Tomato : public AbstractFruit {
public:
  void setSize(int size);
  int size() const;

  bool isForFruitSalad() const override;

private:
  int m_size = 1;
};
