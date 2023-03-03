#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n;
    while (cin >> n) {
        double km = n * 1.6;
        cout << fixed << setprecision(1) << km << endl;
    }
        return 0;
}