#include <iostream>
#include<fstream>
using namespace std;
struct Person {
    string Name;
    string LastName;
    int Age;
    bool Sex;
};

int main() {
    int count = 0, i = 0, f = 0;
    char* str = new char[1024];
    ifstream op; ofstream cl;
    op.open("in.txt");
    if (op.is_open()) {
        cout << "Ok!\n\n" << endl;
    }
    else
    {
        cout << "File not found!\n\n" << endl;
        return -1;
    }
    /////////////////////////////////////////////////////////////////////
    while (!op.eof()) {
        op.getline(str, 1024, '\n');
        count++;
    }
    op.close();
    ////////////////////////////////////////////////////////////////////////
    Person* person = new Person[count];
    ////////////////////////////////////////////////////////////////////
    op.open("in.txt");

    while (!op.eof()) {
        op >> person[i].Name;
        op >> person[i].LastName;
        op >> person[i].Age;
        op >> person[i].Sex;
        try {
            if (person[i].Age <= 0) {
                throw "Years<0?";
            }
        }
        catch (const char* exception) {
            cerr << "Error:" << exception << endl;
        }
        //cout << person[i].Name << " " << person[i].LastName << " " << person[i].Age << " " << person[i].Sex << endl;
        i++;

    }
    i--;
    int max = person[0].Age;
    for (int k = 1; k <= i; k++) {
        if (person[k].Age > max) {
            max = person[k].Age;
            f = k;

        }
        else {
            continue;
        }

    }
    cl.open("out.txt", ios_base::out);
    cout << person[f].Name << " " << person[f].LastName << " " << person[f].Age << " " << person[f].Sex << endl;
    /////////////////////////////////////////////////////////
    int z = 0;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if (person[i].Age < person[j].Age)
            {
                int Age1 = person[i].Age;
                string Name1 = person[i].Name;
                string LastName1 = person[i].LastName;
                bool sex1 = person[i].Sex;
                person[i].Age = person[j].Age;
                person[i].Name = person[j].Name;
                person[i].LastName = person[j].LastName;
                person[i].Sex = person[j].Sex;
                person[j].Age = Age1;
                person[j].Name = Name1;
                person[j].LastName = LastName1;
                person[j].Sex = sex1;
            }
        }
    }
    for (int i = 0; i < count; i++)
    {
        string s = "Male";
        if (person[i].Sex == true)
        {
            s = "Female";
        }
        cl << person[i].Name << " " << person[i].LastName << " " << person[i].Age << " " << s << endl;
    }
    op.close(); cl.close();
    system("pause");

}