#include<iostream>
#include <bitset>
using namespace std;

int main()
{
    int x;
    
    cin >> x;
    while ( x-- ) {

        char f;
        int a, b, c, d;
        cin >> f >> a >> b >> c >> d;
        switch(f){
            
        case'+':
            cout << a + c << " " << b + d << endl;
            break;
        case'-':
            cout << a - c << " " << b - d << endl;
            break;
        case'*':
            cout << a*c - b*d << " " << a*d + b*c << endl;
            break;
        case'/':
            cout << (a*c + b*d)/(c*c + b*b) << " " << (b*c + a*d) / (c*c + b*b) << endl;
            break;

        }
    
    }
    return 0;
}