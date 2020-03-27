#include<iostream>


using namespace std;
int main()
{
    int n, max = 0, ii = 0, mm = 0;
    cin >> n;
    int* m = new int[3];
    for (int i = 0; i < 3; i++)
    {
        if (n % 10 > max)
        {
            max = n % 10;
            ii = i;
        }
        m[2 - i] = n % 10;
        n = n / 10;
    }
    mm = m[0];
    m[0] = max;
    m[2 - ii] = mm;
    for (int i = 0; i < 3; i++)
    {
        cout << m[i];
    }
    system("pause");
    return 0;
}