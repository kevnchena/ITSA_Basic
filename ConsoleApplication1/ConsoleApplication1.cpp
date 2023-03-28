#include<iostream>
#include<sstream>
#include<string>
#include<map>
using namespace std;


int main()
{
	string input, sort;
	int count = 0;
	map<char, int> F;
	string Englishword = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";

	getline(cin, input);
	istringstream split(input);
	while (getline(split, sort, ' ')) { //分割字串執行

		count++;//計算字串數
		for (int i = 0; i < sort.length(); i++)
		{
			if (F.count(sort[i] == 0)) { F.insert(make_pair(sort[i], 1)); }  //F.insert(<pair<char,int>(sort[i],1))
			//make_pair可以省略寫類型
			else F[sort[i]] += 1;
		};
	};
		cout << count << endl;//輸出字串分割段數
		for (int j = 0; j < 52; j++)
		{
			for (map<char, int>::iterator p = F.begin(); p != F.end(); p++) {
				if (Englishword[j] == (*p).first && (*p).second != 0) {
					cout<< (*p).first << " : " << (*p).second << endl;
				};
			};
		};
}

