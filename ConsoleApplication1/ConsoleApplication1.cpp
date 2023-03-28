#include<iostream>
#include<sstream>
#include<string>
#include<map>
#include<algorithm>
using namespace std;


int main()
{
	string input, sort;
	int count = 0;
	map<char, int> F;
	string Englishword = "abcdefghijklmnopqrstuvwxyz";

	getline(cin, input);
	transform(input.begin(), input.end(), input.begin(), ::tolower);
	//        目標.範圍頭      目標.範圍尾   目標.轉換後起始位置  轉換方式(to lower)
	istringstream split(input);
	
	while (getline(split, sort, ' ')) { //分割字串執行
		
		count++;//計算字串數
		for (int i = 0; i < sort.length(); i++)
		{
			F[sort[i]] += 1;
		};
	};
		cout << count << endl;//輸出字串分割段數
		for (int j = 0; j < 26; j++)
		{
			for (map<char, int>::iterator p = F.begin(); p != F.end(); p++) {
				if (Englishword[j] == (*p).first && (*p).second != 0) {
					cout<< (*p).first << " : " << (*p).second << endl;
				};
			};
		};
}

