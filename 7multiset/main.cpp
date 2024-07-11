#include <iostream>
#include <set>
// works the same as a set but accepts duplicate object
//
// if eoperating mion user define types you have to definr a comparator function
// same as in set


class Person{
  public:
    int age;
    std::string name;
  bool operator < (const Person& rhs) const {return  age< rhs.age;}
  bool operator > (const Person& rhs) const {return  age> rhs.age;}
};

int main() {
  std::multiset<int,std::less<int>> multiSet = {
      1, 2, 3, 4, 5, 3, 3, 2, 1,
  };

  for (const auto &e : multiSet) {

    std::cout << e << "\n";
  }
  std::multiset<Person> multiSet2 = {{23,"jon"} , {23 , "jon"} , {32 , "jeff"}};
  for (const auto &e : multiSet) {

    std::cout << e << "\n";
  }

  for (const auto &e : multiSet2) {

    std::cout << e.name << e.age << "\n";
  }


  return 0;
}
