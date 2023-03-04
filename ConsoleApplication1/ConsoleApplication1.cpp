#include<iostream>
#include <bitset>
using namespace std;

int main()
{
    int n;
    int ans = 1;
    ;
    cin >> n;
    for (int i = 2; i < n; i++) {
        if (n % i == 0)ans = 0;
    }
    if (ans == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}