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
		if (i < n)time[i] =  (int)sort[i] + (int)sort[i + 1];
		
		i++;
		cout << sort << endl;
		cout << "time: " << time[i] << endl;
	}
	
}
