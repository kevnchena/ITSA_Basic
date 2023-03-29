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
		return 0;
	}
	else return 0;
}
