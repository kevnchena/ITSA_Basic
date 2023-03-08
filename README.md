# 題目8. 質數判別 

## 問題描述：
試撰寫一個程式，由輸入一個整數，然後判別此數是否為質數。質數是指除了 1 和它本身之外，沒有其它的數可以整除它的數，例如， 2, 3, 5, 7 與 11 等皆為質數。

### 輸入說明：
輸入一個正整數。

### 輸出說明：
質數顯示 YES ；非質數顯示 NO 。
## 範例：

### Sample Input:
23

37

39
### Sample Output:
YES

YES

NO

### 解答
改成使用While迴圈去做

```
#include<iostream>
using namespace std;

int main()
{
    int n,a;
    int ans = 1;
    a = 2; 
    cin >> n;
    while (a < n) { //提前宣告a當條件
        if (n % a == 0) {
            ans = 0;
        }
        a++;
    }
    if (ans == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
```
