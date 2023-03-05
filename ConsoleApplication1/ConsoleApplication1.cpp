#include<iostream>  
using namespace std;

int main()
{
    int col, row;
    int *a;
    cin >> col >> row;
    a=new int[col*row];//配一個可以放 int值 的記憶體空間
    
    for (int i = 0; i < (col * row); i++) {
       cin >> a[i];//輸入陣列元素
    }
    for (int i = 0; i < row; i++) { //列轉行
        int count = 0;

        for (int j = 0; j < col; j++) {//行轉列
            count++;
                cout << a[j * row + i];
                if (count % col != 0)cout << " ";
        }
        cout << endl;
    }
   
    delete []a;
    return 0;
}