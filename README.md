# 題目18. QWERTY

## 問題描述 ：

輸入一段文字 ( 限制為 ASCII 表中，編號 32 至 125 之字元 ) ，將它們每個字元依照鍵盤的位置，印出它們右邊的字元，若右邊按鍵有兩層字元 ( 如 : 和 ; 位於同一按鍵上 ) ，則輸出下層字元，即 ”;” ，若該按鍵為上層字元 ( 如 !) 則輸出其右邊按鍵之上層字元 ( 如 @) ，若輸入的字元右邊的鍵為不可視按鍵，如 shift, enter,backspace 或右邊已無按鍵，如不做更動，照樣輸出。

### 輸入說明 ：

輸入一行鍵盤上屬於 ASCII 表中編號 32 至 125 之字元，並以 enter 結束該行。

### 輸出說明 ：

輸出該行每個字元右邊位置的文字，除題目所述之例外字元除外。
最後必須有換行

## 範例 ：

### 輸入範例

Qwer  

wert  

Adgj  

### 輸出範例

sfhk  

ehn6  

rjm7  

## 解答

```
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{	//a的宣告裡面以行左至右排列，尾巴的字元就多一次
	string a = "~!@#$%^&*()_++`1234567890-=={}||qwertyuiop[]\\:""asdffghjkl;''<>??zxcvbnm,.//";
	int a_len = a.size();
	
	string input;
	string output[127];
	getline(cin, input);//可以讀spacebar
	transform(input.begin(), input.end(), input.begin(),::tolower);//::tolower不然會編譯失敗
	int input_len = input.size();
	
	for (int i = 0; i < input_len; i++) {//input長度為外迴圈容量

		for (int j = 0; j < a_len; j++) {//鍵盤長度

			if (input[i] == ' ') {//空白就等於空白

				output[i] = ' ';
				break;
			}
			else if (input[i] == a[j]) {//輸入比鍵盤
				output[i] = a[j + 1];//一樣就+1
				break;//只做一次
			};
		};
		cout << output[i];
	};

	cout << endl;
	return 0;
}
```
