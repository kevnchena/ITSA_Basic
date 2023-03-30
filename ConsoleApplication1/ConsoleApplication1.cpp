#include<iostream>
#include<sstream>
#include<string>
#include<vector>
using namespace std;

int main()
{	
	string a = "~!@#$%^&*()_++`1234567890-=={}||qwertyuiop[]\\:""asdffghjkl;''<>??zxcvbnm,.//";
	int a_len = a.size();
	cout << a.size();
	
	string input;
	vector<string>output = {};

	getline(cin, input);
	int input_len = input.size();
	
	for (int i = 0; i < input_len; i++) {
		if (input[i] == ' ')break;

		for (int j = 0; j < a_len; j++) {
			if (input[i] == a[j])
				output[i].push_back(a[j + 1]);
				
		};

	};
	for (auto&& i:output) { cout << i; };
	cout << endl;
	return 0;
}
