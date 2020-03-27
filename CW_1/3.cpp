#include <iostream>
using namespace std;

int main() {
    int n, min;
    double mid=0;
    cout << "Type your n:"; cin >> n;
    int* mas = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "[" << i + 1 << "]" << ": ";
        cin >> mas[i];
        cout << "\nYour mas: ";

        for (int i = 0; i < n; ++i) {
            cout << mas[i] << " ";
        }

        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        mid += mas[i];
    }
    mid = mid / n;
    for (int i = 0; i < n; i++) {
        min = mas[0];
        if (mas[i] < min) {
            min == mas[i];
        }
        else {
            continue;
        }
    }
    for (int i = 0; i < n; i++) {
        if ((mas[i] < mid) and (mas[i] > min)) {
            cout << mas[i] << endl;
        }
        else {
            continue;
        }

    }
    system("pause");
    return 0;
}