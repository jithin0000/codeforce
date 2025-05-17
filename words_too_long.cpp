#include <iostream>
using namespace std;

int main()
{
    int minLength;
    std::string word;
    cin>>minLength;
    for(int i=0; i<minLength; i++)
    {
        cin >> word;
    int wordSize = word.length();
    if(wordSize >10)
    {
        cout <<word[0]<<wordSize-2<<word[wordSize-1]<<endl;
    }else{
        cout << word << endl;
        }
    }

}

