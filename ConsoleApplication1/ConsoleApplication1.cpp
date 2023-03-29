#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;


int main()
{
	string input;
	vector<string> container;
	getline(cin, input);
	transform(input.begin(), input.end(), input.begin(), tolower);

	istringstream str(input);

	
	for (int i = 0;i<input.size();i++) {
		container.push_back(input);
	}
	cout << container[0] << endl;

}
