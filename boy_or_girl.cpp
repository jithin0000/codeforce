#include <iostream>
using namespace std;
#include <string>
#include <unordered_map>


int main(){

    string name;
    cin >> name;

    unordered_map<char,int> map;
    int count=0;

    for(size_t i=0 ; i < name.length() ; i++)
    {
        // check each character
        char w = name[i];
        // if character already encountered before its not unique
        if(map.count(w)==1)continue;
        // else increase 
        count ++;
        map.emplace(w,i);
    }
    if(count % 2 !=0 ) cout << "IGNORE HIM!" << endl;
    else cout << "CHAT WITH HER!" << endl;

}
