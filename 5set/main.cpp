#include <functional>
#include <iostream>
#include <set>

//std::set
// std::set is a associative  container that contains a sorted ser of unique object of type key.
// it is usually  implemented using Red-Black tree.
// insertion, removal , search  have logarythmic complexity
// is we want to store user defined data type in set then we will have to provide
//    compare function so that ser can store them in sorted order
//we can pass the order of sorting while constructing set object.
//

// it store unique elements and they are stored in sorted order (A/D)


class Person{
  public:
    int age;
    std::string name;
  bool operator < (const Person& rhs) const {return  age< rhs.age;}
  bool operator > (const Person& rhs) const {return  age> rhs.age;}
};

int main(){

  std::set<int> Set = {1,2,3,4,5,1,2,3,4,5};

  for(const auto& e: Set){
    std::cout << e  << "\n";
  }
  std::set<int,std::greater<>> Set2 = {1,2,3,4,5,1,2,3,4,5};

  for(const auto& e: Set2){
    std::cout << e  << "\n";
  }


  std::set<Person> Set3 = {{23,"jon"} , {32, "josh"}};

  for(const auto& e: Set3){
    std::cout << e.age << " " << e.name   << "\n";
  }


  std::set<Person, std::greater<>> Set4 = {{23,"jon"} , {32, "josh"}};

  for(const auto& e: Set4){
    std::cout << e.age << " " << e.name   << "\n";
  }


  return 0;
}


