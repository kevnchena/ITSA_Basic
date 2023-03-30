# 題目17. 英文斷詞
成績: 0 / 倒扣: 0.8
## 問題描述 ：

斷詞在自然語言的研究上是個很重要的步驟，主要就是將關鍵字從句子中斷出，英文的斷詞較為簡單，就根據句子中的空格將英文字隔開。

### 輸入說明 ：

輸入一句英文敘述句。 字元數≤1000。

### 輸出說明 ：

將輸入的句子進行斷詞，將斷出的關鍵字依照句子中的出現排序列印出。全部轉成小寫，列印出的關鍵字不得重複，關鍵字間以一個空格隔開，最後一個關鍵字後面進行換行。例如輸入 How do you do ，則輸出 how do you 。

## 範例 ：

### 輸入範例

### 輸出範例

How do you do

how do you

## 解答



```
#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;

string checked(const string& obj) {//檢查有沒有超過1000字元
	if (obj.size() <= 1000)
		return obj;
	else
		return "";
}

int main()
{

	string input, sort, output;
	vector<string> container;
	getline(cin, input);
	transform(input.begin(), input.end(), input.begin(), ::tolower);

	string checked(input);

	istringstream str(checked);



	while (getline(str, sort, ' ')) {//分割成每碰到一個' '輸入一段字串
		container.push_back(sort);
	}

	int limiter = container.size();
	int count = container.size() - 1;//計算要幾個空白 尾巴-1
	int flag = 0;

	for (int i = 0; i < limiter; i++) 
	{


		for (int j = i + 1; j < limiter; j++)//比較元素有沒有相等
		{
			if (container[i] == container[j] && !container[j].empty()) 
			{

				container[j].clear();//有就把j當下的刪除
				count--;
			};
		};

	};
	for (int k = 0; k < limiter; k++) 
	{
		if (!container[k].empty()) {
			flag++;
			cout << container[k];//如果comtaimer[i]內值不空
			if (flag <= count)cout << " ";//k<=計算次數就不再輸出空白
		};
	};
	cout << endl;	
	return 0;
}
```
