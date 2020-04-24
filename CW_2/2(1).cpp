#include <iostream>

using namespace std;
void DeleteMatrix(int** matrix, int n)
{
    //clean memory
    for (int i = 0; i < n; i++)
    {
        delete[] matrix[i];
    }

    delete[] matrix;
}
int
main()
{
    int n, m, s = 0;
    cin >> n >> m;
    int** a = new int* [n];
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
    int** arr = new int* [k];
    for (int i = 0; i < k; i++)
    {
        arr[i] = new int[k];
        for (int j = 0; j < k; j++)
        {
            arr[i][j] = 0;
        }
    }
    int jj = 0, ii = 0, nn = 0;
    int* mas = new int[k * k];
    for (int l = 0; l < n * m * n * m; l++)
    {
        for (int i = ii; i < k + ii; i++)
        {
            for (int j = jj; j < k + jj; j++)
            {
                s += a[i][j];
                mas[nn] = a[i][j];
                nn++;
            }
        }
        nn = 0;
        if (max < s)
        {
            max = s;
            for (int i = 0; i < k; i++)
            {
                for (int j = 0; j < k; j++)
                {
                    arr[i][j] = mas[nn];
                    nn++;
                }
            }
        }
        nn = 0;
        if (k + jj < m)
        {
            jj++;
        }
        else
        {
            if (k + ii < n)
            {
                ii++;
            }
            jj = 0;
        }
        s = 0;
    }
    cout << max << endl;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    system("pause");
    DeleteMatrix(a, n); DeleteMatrix(arr, k);
    return 0;
}