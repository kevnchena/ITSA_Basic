#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{	
	string a = "~!@#$%^&*()_++`1234567890-=={}||qwertyuiop[]\\:""asdffghjkl;''<>??zxcvbnm,.//";
	int a_len = a.size();
	
	string input;
	string output[127];
	getline(cin, input);
	transform(input.begin(), input.end(), input.begin(), tolower);
	int input_len = input.size();
	
	for (int i = 0; i < input_len; i++) {

		for (int j = 0; j < a_len; j++) {
			if (input[i] == ' ') {
				output[i] = ' ';
				break;
			}
			else if (input[i] == a[j]) {
				output[i] = a[j + 1];
				break;
			};
		};
		cout << output[i];
	};

	cout << endl;
	return 0;
}
