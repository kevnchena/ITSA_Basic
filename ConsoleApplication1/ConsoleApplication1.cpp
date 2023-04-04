#include<iostream>  
using namespace std;

int main()
{
    long double r, n, p;
    double sum = 0.0;
    cin >> r >> n >> p;
    r += 1.0;
    for (int i = 1; i <= n; i++) {

        sum = (sum + p) * r;
    }
    cout << (long long)sum << endl;

    return 0;
}