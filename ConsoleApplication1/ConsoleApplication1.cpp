#include<iostream>  
using namespace std;

int main()
{
    long double r, n, p;
    double sum = 0.0;//本利和
    cin >> r >> n >> p;
    r += 1.0;
    
    for (int i = 1; i <= n; i++) {

        sum = (sum + p) * r;//(前面+本次存款)*利率
    }
    cout << (long long)sum << endl;//longlong可以忽略掉小數點

    return 0;
}