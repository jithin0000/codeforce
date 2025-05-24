#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;

int main(){

    string word;
    cin >> word;

    if(!word.empty())
    {
        word[0] = toupper(word[0]);
        cout << word << endl;
    }

}
