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
