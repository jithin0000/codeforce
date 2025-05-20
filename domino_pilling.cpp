#include <iostream>
using namespace std;

int main(){

    int m, n;
    cin >> m >> n;
    int total = m * n;
    if(total==1)
    {
        cout << 0 << endl;
        return 0;
    }
    cout << total/2 << endl;

}
