#include<iostream>  
using namespace std;

int main()
{
    int col, row;
    int *a;
    int count = 0;
    cin >> col >> row;
    a=new int[col*row];
 
    for (int i = 0; i < (col*row); i++) {
       cin >> a[i];
    }
    for (int i = 0; i < row; i++) {

        for (int j = 0; j < col; j++) {
            count++;
                cout << a[j * row + i];
                if (count % col != 0)cout << " ";
        }
        cout << endl;
    }
   
    delete []a;
    return 0;
}