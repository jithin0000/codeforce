#include <iostream>
using namespace std;
#include <string>

int main() {
  int n;
  cin >> n;
  string colors;
  cin >> colors;

  int start = 0;
  int next = 1;
  int count = 0;
  while (next < colors.length()) {
    if (colors[start] == colors[next]) {
      count++;
    }
    next++;
    start++;
  }
  cout << count << endl;
}
