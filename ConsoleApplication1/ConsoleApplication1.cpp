#include<iostream>
#include<string>

using namespace std;

int main()
{
	string input, input2;
	
	getline(cin, input);
	getline(cin, input2);
	
	string::size_type pos = 0;
	int count=0;
	if (input.length() < 128 && input2.length() < 512) {
		while ((pos = input2.find(input, pos)) != string::npos)
		{
			pos++;
			count++;

		}

		cout << count << endl;
		return 0;
	}
	else return 0;
}
