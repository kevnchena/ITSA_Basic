#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;


int main()
{
	string input,sort;
	vector<string> container;
	getline(cin, input);
	transform(input.begin(), input.end(), input.begin(), ::tolower);

	istringstream str(input);

	
	while (getline(str,sort,' ')) {//分割成每碰到一個' '輸入一段字串
		container.push_back(sort);
	}

	int limiter = container.size();

	for (int i = 0; i < limiter; i++) {
		

		for (int j = i + 1; j < limiter; j++) {//比較元素有沒有相等
			if (container[i] == container[j]) {
				
				container[j].clear();//有就把當下的刪除
			};
		};
		
		cout << container[i];
		if (container[i].compare("")!=0)cout << " ";//如果comtaimer[i]內的值不相等(!=0)才輸出
		//if (count >0)cout << container[i] << " ";
		
	};
	cout << endl;
	return 0;
}
