# 題目4. 停車費計算

## 問題描述：
假設某個停車場的費率是停車2小時以內，每半小時30元，超過2小時，但未滿4小時的部份，每半小時40元，超過4小時以上的部份，每半小時60元，未滿半小時部分不計費。如果您從早上10點23分停到下午3點20分，請撰寫程式計算共需繳交的停車費。

### 輸入說明：
輸入兩組時間，分別為開始與離開時間，24小時制。

### 輸出說明：
輸出停車費。

## 範例：

### 輸入範例:
10 23
15 20

### 輸出範例:
340

### 解答
```
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
```
