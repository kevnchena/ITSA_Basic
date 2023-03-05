#include<iostream>
#include <bitset>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    while (a != 0 && b != 0) {
        if (a > b) a = a % b;
        else b = b % a;
    }
    if (a >= b) cout << a << endl;
    else cout << b << endl;
    return 0;
}