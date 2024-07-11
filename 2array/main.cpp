#include <array>
#include <iostream>
#include <regex>

int main(){
  // std::array<T, N> array;
  // t - type
  // n - size
  // t arr[n] name;
  //container that is fixed length

  // access elements
  // at() // throws an acception
  // []  //doesnt
  // front()
  // back()
  // data() //gives acces to uderlying array
  //


  //declaration

  //std::array<int,5> myarray;

  //init
  std::array<int ,5 > myarray = {1,2,3,4,5}; // init list
  std::array<int ,5 > myarray2 {1,2,3,4,5}; // uniform init

  // assighn using init list

  std::array<int ,5> myarray3;
  myarray3 = {1,2,3,4,5};


return  0;
}
