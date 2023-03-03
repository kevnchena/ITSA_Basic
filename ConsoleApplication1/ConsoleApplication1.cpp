#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int inx, iny;
    int outx, outy;
    
    cin >> inx >> iny;
    cin >> outx >> outy;
    int time = (outx * 60 + outy) - (inx * 60 + iny);
    if(time<=120 && time>=0){
        cout << time / 30 * 30 << endl;
    }
    else if(time>120 && time<=240){
        cout << (time-120) / 30 * 40+120 << endl;
    }
    else {
        cout << (time - 240) / 30 * 60 + 120 + 160<< endl;
    }
    
        return 0;
}