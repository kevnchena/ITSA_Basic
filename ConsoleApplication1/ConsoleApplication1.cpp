#include<iostream>
#include<string>
#include<map>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;


int main()
{
	string input;
	vector<string> container;
	istringstream str(input);
	
	while (getline(cin, input)) {
		container.push_back(input);
	}
	cout << container << endl;
	break;
}
