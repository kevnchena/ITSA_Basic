# String.find()的使用練習
```
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str = "isisisis";
	string str2 = "isis";
	
	//str.find("is");

	/*size_t found = str.find("isis");
	if (found != string::npos) {
		cout << "found at" << found << endl;
	}
	size_t found1 = str.find_first_of("is");
	size_t found2 = str.find_last_of("is");
	cout << "found1 at" << found1 << endl;
	cout << "found2 at" << found2 << endl;*/
	//搜尋特定範圍
	
	/*int length = str.length();
	int pos = 0;
	
	str.find(str2.c_str(), pos, length) != string::npos ?//str.find(要找的字,begin,end)
		cout << length << " chars match from pos " << pos << endl :
		cout << "no match!" << endl;*/

	string s = "we are the lion";
	string flag;
	string::size_type pos;

	flag = "e";//要找的字
	pos = 0;//string.find()要使用的特規
	int i = 1;
	while ((pos = s.find(flag,pos))!= string::npos){
	 cout << "position  " << i << " : " << pos << endl;
		pos++;
		i++;
	};


}
```
