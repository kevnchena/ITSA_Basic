#include<iostream>
#include<string>


using namespace std;

int main(){
	int n, sum = 0;
	string str;
	cin >> n;
	cin.ignore();

	for (int i = 0; i < n; i++) {
		getline(cin,str);
		for (int j = str.length() - 1; j>=0; j--) {
			sum += int(str[j]);
			
		}
		cout << sum << endl;
		sum = 0;
	};

}
