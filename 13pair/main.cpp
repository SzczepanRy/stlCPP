#include <iostream>
#include <string>
#include <utility>
#include <vector>

// std::pair<t1 ,t2 > obj;

// map , multimap , unorder_map , unorder_multimap  use pairs
using namespace std;

void print(std::pair<int, int> obj) {
  std::cout << obj.first << " " << obj.second << "\n";
}

int main() {
  {
    std::pair<int, int> obj(10, 20);
    print(obj);
  }
  {
    std::pair<int, int> obj = std::make_pair(32, 12);
    print(obj);
  }

  {
    std::vector<std::pair<std::string, int>> list;
    list.push_back(make_pair("jon", 32));
    list.push_back(make_pair("jake", 11));
    list.push_back(pair<string, int>("jim", 22)); //needed

    for(auto& el : list){
    cout << el.first << " " << el.second << "\n";
    }
  }

  return 0;
}
