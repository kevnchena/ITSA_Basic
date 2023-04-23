#include<iostream>
using namespace std;

int main()
{
	string special, jp1, jp2, jp3;
	int n, c;
	string ticket;
	int hit[9] = { 0 };//各獎項中獎次數0是特別獎 1,2,3是頭獎，所以才會多兩個
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
		
		for(int i=0;)
	}




}