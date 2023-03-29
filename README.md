# 題目16. 子字串出現次數

## 問題描述：

給予兩個英文字串，請計算出第一個字串出現在第二個字串中的次數。

### 輸入說明：

輸入分為兩行，第一行是由英文大小寫字母與數字所組成的字串，長度不超過 128 個字母。

第二行也是由英文大小寫字母與數字所組成的字串，長度不超過 512 個字母。

### 輸出說明：

第一個字串出現在第二個字串中的次數。

## 範例：

### Sample Input

aa  
aaa123bbab  

baba  

12b3bbababa12  

baa  

ababaabbbb  


### Sample Output

2

2

1

## 解答


```
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string input, input2;
	
	getline(cin, input);
	getline(cin, input2);
	
	string::size_type pos = 0;//size_type是string::find的返回類型,沒用的話編譯失敗
	int count=0;
	if (input.length() < 128 && input2.length() < 512) {

		while ((pos = input2.find(input, pos)) != string::npos)
		{//        被檢查的字串.find(想找的字串,第幾個開始)!=string::no position
			pos++;
			count++;

		}

		cout << count << endl;
	
	}
	return 0;
}
```
