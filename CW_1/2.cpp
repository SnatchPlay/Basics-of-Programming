#include<iostream>
#include <cmath>

using namespace std;
int main()
{
    int n;
    cin >> n;
    double s = 1;
    for (int i = 1; i <= n; i++)
    {
        s += sin(i);
    }
    cout << s;
    system("pause");
    return 0;
}