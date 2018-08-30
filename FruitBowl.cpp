module Bowls;

import std;
import FruitSalad;
import AbstractFruit;

AbstractBowl::~AbstractBowl() {}

FruitBowl::FruitBowl() {
  // Crashes Clang right now.
  // add(std::make_unique<Apple>());
  // add(std::make_unique<Grape>());
}

FruitBowl::~FruitBowl() {}

std::unique_ptr<AbstractFruit>
FruitBowl::add(std::unique_ptr<AbstractFruit> fruit) {
  doAdd(std::move(fruit));
  return {};
}
