#include<iostream>
#include <bitset>
using namespace std;

int main()
{
    int x;
    
    cout << "請輸入月份: ";
    cin >> x;
    switch ( x ) {
    case 1:
    case 2:
    case 3:
        cout << "Spring" << endl;
        break;
    case 4:
    case 5:
    case 6:
        cout << "Summer" << endl;
        break;
    case 7:
    case 8:
    case 9:
        cout << "Autumn" << endl;
        break;
    case 10:
    case 11:
    case 12:
        cout << "Winter" << endl;
        break;
    default:
        cout << "retry again!" << endl;
    }
    return 0;
}