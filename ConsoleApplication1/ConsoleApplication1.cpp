#include<iostream>
#include <bitset>
using namespace std;

int main()
{
    int n,a;
    int ans = 1;
    a = 2;
    cin >> n;
    while (a < n) {
        if (n % a == 0) {
            ans = 0;
        }
        a++;
    }
    if (ans == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}