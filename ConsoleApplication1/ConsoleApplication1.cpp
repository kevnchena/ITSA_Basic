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
	
	

	while (getline(str,sort,' ')) {//分割成每碰到一個' '輸入一段字串
		container.push_back(sort);
	}

	int limiter = container.size();
	int count = container.size()-1;//計算要幾個空白 尾巴-1

	for (int i = 0; i < limiter; i++) {
		

		for (int j = i + 1; j < limiter; j++) {//比較元素有沒有相等
			if (container[i] == container[j]) {
				
				container[j].clear();//有就把當下的刪除
				count--;
			};
		};
		
		if (!container[i].empty()) {//如果comtaimer[i]內值不空
			cout << container[i];
			if (i < count)cout << " ";//i<計算次數就不再輸出空白
		};
		
	};
	//cout << endl;	
	return 0;
}
