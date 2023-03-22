#include<iostream>  
using namespace std;

int f(int n);
int main()
{
    int a;
    cin >> a;
    cout << f(a) << endl;

    return 0;
}

int f(int n){
    if (n == 0 || n == 1) {
        return n += 1;
    }
    else if(n>1){
        return f(n - 1) + f(n / 2);
        }
    }