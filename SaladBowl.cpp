module Bowls;

import std;
import AbstractFruit;

std::unique_ptr<AbstractFruit>
SaladBowl::add(std::unique_ptr<AbstractFruit> fruit) {
  if (fruit->isForFruitSalad()) {
    doAdd(std::move(fruit));
    return {};
  }
  return fruit;
}
