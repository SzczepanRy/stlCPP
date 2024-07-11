#include <iostream>
#include <queue>
using namespace std;


// front back pop empty size  empty // you can only remove the first element

void print(queue<int> que ){

  while (!que.empty()) {
    cout << que.front();
    que.pop(); //from the front
  }
}

int main() {

  std::queue<int> que;

  que.push(2);
  que.push(3);
  que.push(4);

  print(que);

return 0;
}
