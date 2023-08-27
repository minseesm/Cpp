#include <iostream>
#include <string>
using namespace std;

void ageInfo(int person_age){
  cout << person_age << " years old" << endl;
}

namespace Minsoo
{
  int age = 31;
  string name = "minsoi";

  void hello() {
    cout << "Hello, I'm " << name << endl;
  }
}

using namespace Minsoo;

namespace Kelly
{
  int age = 0;
  string name = "kelly";

  void hello() {
    cout << "Hello, I'm " << name << endl;
  }
}

int main() {
  Minsoo::hello();
  Kelly::hello();
  name = "minsoo";
  Kelly::age = 17;
  Minsoo::hello();
  ageInfo(Minsoo::age);
  ageInfo(Kelly::age);
}