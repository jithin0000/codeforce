#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;

string toLowerCase(const string& str){
    string lower = str;
    for(char &c: lower)
        c = tolower(c);
    return lower;
}
int main(){
    string str1, str2;
    cin >> str1 >> str2;

    string a = toLowerCase(str1);
    string b = toLowerCase(str2);

    if(a<b) cout << -1 << endl;
    else if (a>b) cout << 1 << endl;
    else cout << 0 << endl;



}
