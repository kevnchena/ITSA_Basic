# 題目5. 十進制轉二進制

## 問題描述：
撰寫一個程式，使用者輸入一個整數，印出8位元的二進制表示。

### 輸入說明：
輸入一個整數，介於-128～127之間。

### 輸出說明：
以8位元的二進制顯示。

## 範例：

### 輸入範例:
15
-2

### 輸出範例:
00001111
11111110

## 解答

直接用bitset函式轉換，題目輸出範例為8位元，那就設定為只顯示八位元。
```
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
```
