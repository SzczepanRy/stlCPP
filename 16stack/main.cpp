#include <iostream>
#include <iterator>
#include <stack>

using namespace std;
///same as a normal stack
// push and pop only from the back
// empty() size() top() pushing(g) - g adds g to the top of the stack
// pop()
//

void print(std::stack<int> stk ){
  while(!stk.empty()){

    cout << stk.top() << "\n";
    stk.pop();
  }

}


int main(){

  std::stack<int> stk;
  stk.push(2);
  stk.push(3);
  stk.push(5);

  print(stk);
  return 0;
}
