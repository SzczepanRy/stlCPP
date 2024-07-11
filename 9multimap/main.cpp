#include <iostream>
#include <map>
#include <utility>
// like a map but a key can chold multiple values
int main(){
  std::multimap<char ,int > Multimap;
  Multimap.insert(std::make_pair('a',1));
  Multimap.insert(std::make_pair('a',2));
  Multimap.insert(std::make_pair('a',3));
  Multimap.insert(std::make_pair('b',4));
  Multimap.insert(std::make_pair('b',5));

  for(auto &elm: Multimap ){
    std::cout << elm.first <<" " << elm.second << "\n";
  }
  //first and last
  std::pair< std::multimap<char, int>::iterator  , std::multimap<char, int>::iterator> range = Multimap.equal_range('a');

  for(auto it = range.first; it!= range.second ; ++it){
    std::cout << it->first << " " << it->second << "\n";
  }


  std::cout << "count " << Multimap.count('a') << "\n";


  // find() returns the any matching pair
  // contains() true or false
  // lower_bound() returns the forst in the row of the sort of the multimap
  // upper_bound returns the pair of index of the last matching value +1

  return 0;
}
