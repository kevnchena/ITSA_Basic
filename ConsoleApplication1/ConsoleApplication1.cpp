#include<iostream>
using namespace std;

void check(string a, string b,int hit[],int n) {
	int c = 8;
	do {

		if (a[c-1] == b[c-1]) {
			hit[n]++;
		}
		else break;

		c--;
	} while (c!=0);
	
}


int main()
{
	string special, jp1, jp2, jp3;
	int n;
	string ticket;
	int hit[3] = { 0 };//頭獎中的號碼數量
	int prize[7] = { 0 };//獎項
	int sum = 0;//最後價格
	cin >> special >> jp1 >> jp2 >> jp3;
	cin >> n;//發票數量
	for (int i = 0; i < n; i++) {
		cin >> ticket;
		
		if (ticket == special) {//特別獎有中就直接break;
			prize[0]++;
			break;
		}

		else {

			check(ticket, jp1, hit, 0);
			check(ticket, jp2, hit, 1);
			check(ticket, jp3, hit, 2);
		}
		
		if (hit[0] >= hit[1] && hit[0] >= hit[2])prize[6- hit[0]+3]++;
		else if (hit[1] >= hit[0] && hit[1] >= hit[2])prize[6 - hit[1]+3]++;
		else if (hit[2] >= hit[0] && hit[2] >= hit[1])prize[6 - hit[2]+3]++;
		hit[0] = { 0 };
		hit[1] = { 0 };
		hit[2] = { 0 };
	}
			
	
	
	
	for (int i = 0; i < 7; i++) {
				cout << prize[i];
				if (i != 6)cout << ' ';
			}
			cout << endl;
			sum += prize[0] * 2000000 + prize[1] * 200000 + prize[2] * 40000 + prize[3] * 10000 +
				prize[4] * 4000 + prize[5] * 1000 + prize[6] * 200;
			cout << sum<<endl;
	
}