#include<iostream>
using namespace std;

int main()
{
	string special, jp1, jp2, jp3;
	int n, c=7;
	string ticket;
	int hit[4] = { 0 };//各獎項中獎次數 0是特別獎 1,2,3是頭獎，所以才會多兩個
	int prize[7] = { 0 };//獎項
	int sum = 0;
	cin >> special >> jp1 >> jp2 >> jp3;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ticket;
		
		do {
			if (ticket[c] == special[c]) {
				hit[0]++;
			}
			else if (ticket[c] == jp1[c]) {
				hit[1]++;
			}
			else if (ticket[c] == jp2[c]) {
				hit[2]++;
			}
			else if (ticket[c] == jp3[c]) {
				hit[3]++;
			}
			c--;
		} while (c != 0);

		if (hit[0] == 8)prize[0]++;
		
			for (int i =0 ; i <=7 ; i++) {
				if (hit[1] == i + 3)prize[7-1-i]++;
		}
			for (int i = 0; i < 7; i++) {
				cout << prize[i];
				if (i != 6)cout << ' ';
			}
			cout << endl;
			sum += prize[0] * 2000000 + prize[1] * 200000 + prize[2] * 40000 + prize[3] * 10000 +
				prize[4] * 4000 + prize[5] * 1000 + prize[6] * 200;
			cout << sum;
	}




}