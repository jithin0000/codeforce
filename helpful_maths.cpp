#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str;
    cin >> str;

    vector<string> tokens;
    stringstream ss(str);
    string token;
    while(getline(ss,token, '+'))
    {
        tokens.push_back(token);
    }
    sort(tokens.begin(), tokens.end());

    string output;
    for(const string &w : tokens)
        output.append(w).append("+");
    output.pop_back();
    cout << output << endl;
        

}
