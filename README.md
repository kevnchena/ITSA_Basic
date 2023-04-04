# 題目24. 計算複利

## 問題描敘:

你每個月存 10000 元到銀行中，銀行的每月利率為 0.1% ，以複利計算，請問 3 個月後，你的帳戶為多少錢？  

底下的表格示範了如何得到第 3 個月時，帳戶中的本利和（本金 + 利率總合）。  

![image](https://github.com/kevnchena/ITSA_Basic/blob/24/%E8%9E%A2%E5%B9%95%E6%93%B7%E5%8F%96%E7%95%AB%E9%9D%A2%202023-04-04%20180156.png)  


## 我們定義底下幾個符號：

r: 每期利率。以前例而言， r = 0.1%

n: 期數。以前例而言， n = 3

p: 每期投入金額。以前例而言 p = 10000

現在，給你前述的三個值（即 r, n 及 p ），請計算期末的本利和。以前例而言，期未的本利合為 30060.04001 元。  

### Input File Format
輸入有 3 行。第一行為 r ，為浮點數值。第二行為 n ，為一整數。第三行為 p ，為一整數。

### Output Format
輸出本利和，請將數值以「整數」表示（無條件捨去）

## Example

### Sample Input:

0.001  

3  

10000  

### Sample Output:

30060  

## 解答:


```
#include<iostream>  
using namespace std;

int main()
{
    long double r, n, p;
    double sum = 0.0;//本利和
    cin >> r >> n >> p;
    r += 1.0;
    
    for (int i = 1; i <= n; i++) {

        sum = (sum + p) * r;//(前面+本次存款)*利率
    }
    cout << (long long)sum << endl;//longlong強制轉換增加精度

    return 0;
}
```

 

 

