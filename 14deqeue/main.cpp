// deque exists
// it can push and pop forward
// a vector cannot do that
//
// expatntion of a deque is less expencive tha a vector
// cannot be used wth arrays less than 2
//
#include <deque>
#include <iostream>
using namespace std;

void print(const std::deque<int> &dq) {
  for (int num : dq) {
    cout << num << " ";
  }
  cout << "\n";
}

int main() {

  {
    deque<int> dq = {1, 2, 4};
    dq.push_front(1);
    dq.push_back(2);
    print(dq);
  }
{
    deque<int> dq = {3, 2, 4};
    dq.pop_front();
    dq.pop_back();
    print(dq);
  }

  return 0;
}
