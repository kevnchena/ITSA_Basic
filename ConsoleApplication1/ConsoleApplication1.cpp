#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int input, i = 0;
	int a[10] = { 0 };
	vector<int> num;

	while (cin >> input) {
		num.push_back(input);
		cout << num[i];
		i++;
	}
	/*for (int j = 0; j < 10; j++) {

		for (int k = 0; k < 10; k++) {
			if (num[k] != 0&&num[j]==num[k]) {
				a[j]++;
			}
		}
	}*/
	
}
