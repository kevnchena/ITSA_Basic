# 題目19. 最少派車數

## 問題描述 ：

某遊覽車派遣公司共收到n筆任務訂單，訂單中詳細記載發車時間s和返回時間d。每一輛遊覽車只要任務時間不衝突，可立即更換司機繼續上路執行任務。請問該公司至少需要調遣多少車輛才足以應付需求？

###　輸入說明 ：

程式的輸入包含兩行數字，第一行包含一個正整數n，1 ≤ n ≤ 30，代表第二行有n筆訂單的出發時間和返回時間s1, d1, s2, d2, ..., sn, dn，0 < si < di ≤ 24，而此2n個正整數間以空格隔開。

### 輸出說明 ：

輸出最少車輛需求數。

## 範例 ：

### Sample Input:

3  
1 6 3 12 6 18  

### Sample Output:

2

## 解答:  

把陣列當作時間表來用，如果該時間範圍有單，就把該區域的陣列+1
最後取最大的數就是最少的派車數

```
#include<iostream>  
#include<map>  
  
using namespace std;  
  
int main()  
{  
    int order,s,d;  
    int time[25] = {0};  
    int cars=0;  
    cin >> order;  
  
    for (int i = 0; i < order; i++) {//用for迴圈後s,d是分段輸入的  
  
        cin >> s >> d;  
  
        for (int j = s; j < d; j++) {  
            time[j]++;  
            if (time[j] > cars)cars = time[j];  
        };  
  
    }  
    cout << cars << endl;  
    return 0;  
}  
```
