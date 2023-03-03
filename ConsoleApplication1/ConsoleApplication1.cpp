#include<iostream>
#include <bitset>
using namespace std;

int main()
{
    int x;
    
    while (cin >> x) {
        cout << bitset<8>(x) << endl;

    }
        return 0;
}