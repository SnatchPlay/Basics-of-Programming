#include<iostream>
#include<cmath>
using namespace std;
struct Cord {
    int x;
    int y;

    void distation() {
        int x1, y1;
        cout << "x2= ";
        cin >> x1;
        cout << "y2= ";
        cin >> y1;
        cout << "Distance: " << sqrt(pow(x - x1, 2) + pow(y - y1, 2));
    }
    Cord(int a, int b) {
        x = a; y = b;
    }
};
int main()
{
    int a, b;
    cout << "x1= ";
    cin >> a;
    cout << "y1= ";
    cin >> b;
    Cord c1 = Cord(a, b);
    c1.distation();
    return 0;
}