#include<iostream>
#include <bitset>
using namespace std;

int main()
{
    int x;
    
    cout << "請輸入月份: ";
    cin >> x;
    switch ( x ) {
    case 3:
    case 4:
    case 5:
        cout << "Spring" << endl;
        break;
    case 6:
    case 7:
    case 8:
        cout << "Summer" << endl;
        break;
    case 9:
    case 10:
    case 11:
        cout << "Autumn" << endl;
        break;
    case 12:
    case 1:
    case 2:
        cout << "Winter" << endl;
        break;
    default:
        cout << "retry again!" << endl;
    }
    return 0;
}