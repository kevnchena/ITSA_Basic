#include<iostream>
#include<string>
#include <cstdlib>
#include<sstream>
using namespace std;

void compare(string &num1, string &num2) {
	string temp;
	if (num1.size() < num2.size()) {
		temp = num1;
		num1 = num2;
		num2 = temp;

	};
	
}

string plus_stacks(const string& num1, const string& num2) {
	int n1[35] = { 0 };
	int n2[35] = { 0 };
	int sum[35] = { 0 };
	int num1_len = num1.size();
	int num2_len = num2.size();
	stringstream ss;

	for (int i = 0; i < 35; i++) {
		if (i < num1_len)n1[34 - i] = num1[num1_len - 1 - i] - '0';
		if (i < num2_len)n2[34 - i] = num2[num2_len - 1 - i] - '0';

		sum[i] = n1[34 - i] + n2[34 - i];
	};

	for (int j = 0; j < 35; j++) {
		if (sum[j] >= 10) {
			sum[j] -= 10;
			sum[j + 1]++;
		};
	};

	bool leading_zeros = true;
	for (int k = 34; k >= 0; k--) {
		if (leading_zeros == 1 && sum[k] == 0) {
			continue;
		}
		leading_zeros = false;
		ss << sum[k];
	}

	string result = ss.str();
	
	return result;
}

int main()
{
	int n;

	while (cin >> n) {
		string num1, num2;
		cin >> num1;
		cin >> num2;
		compare(num1, num2);
		//int change = atoi(num1[2]);
		cout << stoi(num1)<<endl;
		cout<<plus_stacks(num1, num2);

	};
}
