#include <iostream>
#include <vector>
using namespace std;

struct People {
  string name;
  string number;
};

int main() {
  vector<People> person;

  person.push_back({"Kim", "778-000-1111"});
  person.push_back({"Minsoo", "788-010-1101"});
  person.push_back({"Kelly", "778-123-1234"});
  person.push_back({"DAVID", "788-010-3334"});

  // ---------------

  // vector<int> target = {23, 45, 72, 53, 92};
  // // int target[] = {23, 45, 72, 53, 92};

  for (int i = 0; i < person.size(); i++) {
    if (person[i].name == "Kelly") {
      cout << "Found!" << person[i].number << endl;
      return 0;
    }
  }

  cout << "Not Found !" << endl;
  return 0;

  // ------------------
}