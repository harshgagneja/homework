#include <iostream>
#include <vector>
#include <memory>
#include "GroceryItem.hpp"

int main() {
  std::vector<std::unique_ptr<GroceryItem>> groceryItems;
  while (true) {
    auto item = std::make_unique<GroceryItem>();
    if (!(std::cin >> *item)) break;
    groceryItems.push_back(std::move(item));
  }

  for (auto it = groceryItems.rbegin(); it != groceryItems.rend(); ++it) {
    std::cout << **it << std::endl;
  }

  return 0;
}
