#include <iostream>

using namespace std;

int
main()
{
    int n, m, s = 0;
    cin >> n >> m;
    int** a = new int[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[m];
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int k, max = 0;
    cin >> k;
    int jj = 0, ii = 0;
    for (int l = 0; l < nm; l++)
    {
        for (int i = ii; i < k + ii; i++)
        {
            for (int j = jj; j < k + jj; j++)
            {
                s += a[i][j];
            }
        }
        if (max < s)
        {
            max = s;
        }
        if (k + jj < m - 1)
        {
            jj++;
        }
        else
        {
            if (k + ii < n - 1)
            {
                ii++;
            }
            jj = 0;
        }
        s = 0;
    }
    cout << max;
    system("pause");
    return 0;
}