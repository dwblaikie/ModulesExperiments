module NotFruitSalad;

void Tomato::setSize(int size) { m_size = size; }

int Tomato::size() const { return m_size; }

bool Tomato::isForFruitSalad() const { return false; }
