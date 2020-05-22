#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream f1, f2;
    
    char word[15]; char word2[15];
	f1.open("1.txt"); f2.open("2.txt");
    if (f1.is_open()) {
        cout << "Ok!\n\n" << endl;
    }
    else
    {
        cout << "File not found!\n\n" << endl;
        return -1;
    }
    if (f2.is_open()) {
        cout << "Ok!\n\n" << endl;
    }
    else
    {
        cout << "File not found!\n\n" << endl;
        return -1;
    }
    
    while (f1.eof()) {
        f1 >> word;
        while (f2.eof()) {
            f2 >> word2;
            if (word == word2) {
                cout << word;
            }
            else {
                continue;
            }
        }
        f2.close();
        f2.open("2.txt");
    }

}