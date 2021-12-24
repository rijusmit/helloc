#include <iostream>
#include <cctype>
using namespace std;

int main() {

  // convert 'A' to lowercase
  char cha;
  getline(cin, cha);
  char ch = tolower(cha);
  cout << ch;

  return 0;
}

// Output: a