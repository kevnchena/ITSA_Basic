#include<iostream>
#include <bitset>
using namespace std;

int main()
{
    int x;
    
    cin >> x;//執行次數
    while ( x-- ) {

        char f;
        int a, b, c, d;
        cin >> f >> a >> b >> c >> d; //運算元>>a,ai  b,bi
        switch(f){
            
        case'+':
            cout << a + c << " " << b + d << endl;
            break;
        case'-':
            cout << a - c << " " << b - d << endl;
            break;
        case'*':
            cout << a*c - b*d << " " << b*c + a*d << endl;
            break;
        case'/':
            cout << (a*c + b*d)/(c*c + b*b) << " " << (b*c - a*d) / (c*c + b*b) << endl;
            break;

        }
    
    }
    return 0;
}