#include<iostream>
#include <string>
using namespace std;

int main()
{
    int n ; cin >> n;
    int count=0;
    for(int i=0; i<=n ; i++)
    {
        string word;
        getline(cin,word);
        int localCount=0;
        for(int j=0; j<word.length() ;j++)
        {
            if(word[j] == '1')
            {
                localCount++;
            }
        }
        cout << endl;
        if(localCount > 1)
            count++;
    }
    cout << count;
        
}
