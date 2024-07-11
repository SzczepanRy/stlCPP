#include <functional>
#include <iostream>
#include <map>
#include <utility>
#include <vector>

//syntax : map<T1 , T2> obj ;
//
//map is associative container that store elements in key value combination
//where key should be unique , otherwise it overrides the previous vail;
//
//it implements self-balance binary search tree
//
// a calue can be changed the key acnnot and has to be difftrent


int main(){

  std::map<std::string,int , std::greater<> > Map;
  Map["value1"] =  1223123123;
  Map["value2"] =  231233123;
  Map.insert(std::make_pair("value3", 33333333));

  for(auto &el: Map ){
      std::cout << el.first  << " " << el.second << "\n" ;
  }

  std::cout << Map["value1"] << "\n";

  std::map<std::string,std::vector<int> > Map2;
  Map2["value1"].push_back(12413432);
  Map2["value1"].push_back(12314534);
  Map2.insert(std::make_pair("value2", std::vector<int>{1,2,3} ));

  for(auto &el: Map2 ){
      std::cout << el.first << " " << el.second[0]<< el.second[1]<< "\n" ;
  }

  std::cout << Map["value1"] << "\n";




  return  0;
}
