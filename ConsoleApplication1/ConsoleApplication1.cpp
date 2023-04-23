#include<iostream>
#include<string>


using namespace std;

int main(){
	int n, sum = 0;
	string str;
	cin >> n;
	cin.ignore();

	for (int i = 0; i < n; i++) {
		cin.width(32);
		getline(cin, str);
		for (int j = 0; j< str.length(); j++) {
			sum += int(str[j]);
			
		}
		cout << sum << endl;
		sum = 0;
	};

}
