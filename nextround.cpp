#include <iostream>
using namespace std;

int main() {

  int size, k;
  cin >> size >> k;
  int p[size];

  for (int i = 0; i < size; i++) {
    cin >> p[i];
  }
  int count = 0;
  for (int j = 0; j <size; j++) {
    if (p[j] >= p[k-1]) {
      if (p[j] > 0)
        count = j + 1;
    } else {
      break;
    }
  }
  cout << count << endl;
}
