#include <vector>
#include <iostream>

int main() {
  // 1. Destination Vector: currently has [10, 50]
  std::vector<int> mySpan;
  mySpan.push_back(10);
  mySpan.push_back(50);

  // 2. Source Vector: has [0, 20, 30, 40, 99]
  std::vector<int> source;
  source.push_back(0);
  source.push_back(20);
  source.push_back(30);
  source.push_back(40);
  source.push_back(99);


  // THE INSERT COMMAND
  mySpan.insert(
    mySpan.begin() + 1,   // 1st: WHERE (In mySpan, after the 10)
    source.begin() + 1,   // 2nd: START (In source, at the number 20)
    source.begin() + 4    // 3rd: STOP  (In source, stop BEFORE the 99)
  );

  // Result: mySpan now contains [10, 20, 30, 40, 50]
}
