#include<iostream>
#include <string>
using namespace std;

int main(){
    int number_of_operations;
    cin>>number_of_operations;

    int count=0;
    for(int i=0; i<number_of_operations ; i++)
    {
        string word;
        cin>>word;
        if(word.find("++") != string::npos)
        {
            count++;
        }
        if(word.find("--") !=string::npos)
        {
            count--;
        }
    }
    cout << count << endl;

}
