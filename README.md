# 題目6. 季節判定

## 問題描述：
試撰寫一程式，可輸入月份，然後判斷其所屬的季節（ 3 ~ 5 月為春季，6 ~ 8 月為夏季， 9 ~ 11 月為秋季， 12 ~ 2 月為冬季）。

### 輸入說明：
輸入月份。

### 輸出說明：
輸出該月份的季節，3 ~ 5 月為春季(Spring)， 6 ~ 8 月為夏季(Summer)， 9 ~ 11 月為秋季(Autumn)， 12 ~ 2 月為冬季(Winter)。
 
## 範例：

### Sample Input:
3
10

### Sample Output:
Spring
Autumn

## 解答

```
#include<iostream>

using namespace std;

int main()
{
    int x;
    
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

    }
    return 0;
}
```
