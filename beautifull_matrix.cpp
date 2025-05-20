#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int row = 5;
  int col = 5;
  int matrix[row][col];

  for (int i = 0; i < row; i++)
    for (int j = 0; j < col; j++)
      cin >> matrix[i][j];

  // 2,2
  //
  // 1,4  2-1 = 1, 2-4 = 2
  // 2,1  2-2 =0 , 2-1 =1

  int value = 0;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      if (matrix[i][j] == 1) {
        value = abs(2 - i) + abs(2 - j);
        break;
      }
      if (value != 0)
        break;
    }
  }

  cout << value << endl;
}
