#include<iostream>
#include<bitset>
using namespace std;



int main()
{
	float r,n,p;
	float sum = 0.0;
	cin >> r >> n >> p;
	r += 1.0;
	cout << endl;
	for (int i = 1; i <= n; i++) {

		sum =(sum+ p) * r;
	}
	cout << (long long)sum << endl;

	return 0;
}
