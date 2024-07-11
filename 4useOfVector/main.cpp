#include <iostream>
#include <vector>

int main(){

  std::vector<int> Vec;
  for(int i = 0 ; i <32 ; ++i){
    Vec.push_back(i);
    std::cout << Vec.size() << " " << Vec.capacity() << "\n";
  }
 std::vector<int> Vec2;
  Vec2.reserve(32);
  for(int i = 0 ; i <32 ; ++i){
    Vec2.push_back(i);
    std::cout << Vec2.size() << " " << Vec2.capacity() << "\n";
  }


  return 0;
}
