#include <iostream>
#include <set>
#include <system_error>
// use emplace formore effiviancy
class A {

public:
  int x;
  A(int x=0) : x{x} { std::cout << "construct \n"; };
  A(const A &rhs) {
    x = rhs.x;
    std::cout << "coppy \n";
  }
};
bool operator < (const A& lhs , const A& rhs ) {return  lhs.x < rhs.x;}
int main() {

  std::set<A> Set;
  Set.insert(A(1));
  Set.emplace(2);
  return 0;
}
