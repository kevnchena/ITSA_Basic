#include<iostream>
#include<string>
using namespace std;

void compare(string &num1, string &num2) {
	string temp;
	if (num1.size() < num2.size()) {
		temp = num1;
		num1 = num2;
		num2 = temp;

	};
	
}

int main()
{
	string num1="0", num2="11";
	cout << num1 << num2 << endl;
	compare(num1, num2);
	cout << num1 << num2 << endl;
}
