#include <iostream>
#include<cstring>
#include<string>
using namespace std;
int NumberOfWords( string k)
{
    int numberOfWords = 0;
    for (int i = 0; i < size(k); i++)
    {
        if (k[i] == ' ')
            continue;
        if (i == 0 || k[i - 1] == ' ')

            numberOfWords++;

    }
    return numberOfWords;
}

int main() {
    string k;
    getline(cin, k);
    
    
    

    cout << NumberOfWords(k);
    return 0;
}