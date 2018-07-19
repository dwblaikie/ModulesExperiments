export module AbstractFruit;

export class AbstractFruit {
public:
  void grow();

  virtual bool isForFruitSalad() const = 0;

  virtual ~AbstractFruit() = default;
};
