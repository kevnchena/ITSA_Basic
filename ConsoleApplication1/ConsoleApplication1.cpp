#include<iostream>
#include<map>
#include<sstream>
using namespace std;

int main()
{
	int n;
	int i = 0;
	map<int, int> time;
	
	cin >> n;
	cin.get();//吸收最後輸入的enter鍵
	string input_time,sort;
	getline(cin, input_time);
	stringstream ss(input_time);


	while (getline(ss, sort, ' ')) {
		
		if (i < n) {
			time[i]
			time[i] = input_time[i] + input_time[i + 2];
			i++;
		};
	}
	
}
