#include <forward_list>
#include <iostream>
#include <utility>

// difrent frim a normal list in that it con do forwards in memory like a double linkeed dist  think 2 pointers

int main() {

  std::forward_list<int> list1 = {4, 3, 2, 1, 0, 9};
  std::forward_list<int> list2 = {1, 3, 2, 5, 7, 3};
  //operators
  // = assign front empty max_size clear insert_after emplace_after reverse sort merge splice_after unique remove remove_if resize
  list1.insert_after(list1.begin() , {1,2,3});

  for(const  int& el : list1 ){

  std::cout << el << "\n";
  }

  return 0;
}
