#include <iostream>
#include <list>
// double linked list
// usefull for modification
//
//
// opreator = , assign , front , back , size , max_size , clear , insert
// ,emplace , push_back , pop_back , push_front , pop_front , reverse , sort ,
// merge , splice ,unique , remove , remove_if , resize
int main() {

  std::list<int> list1 = {4, 2, 3, 2, 5};
  std::list<int> list2 = {2, 2, 1, 2, 0};

  for (auto &elm : list1) {
    std::cout << elm << "  ";
  }
  std::cout << "\n";

  for (auto &elm : list2) {
    std::cout << elm << "  ";
  }
  std::cout << "\n";

  return 0;
}
