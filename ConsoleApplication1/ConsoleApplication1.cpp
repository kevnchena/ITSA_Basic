#include<iostream>
#include<map>

using namespace std;

int main()
{
	int order,s,d;
	int time[25] = {0};
	int cars=0;
	cin >> order;

	for (int i = 0; i < order; i++) {//用for迴圈後s,d是分段輸入的

		cin >> s >> d;

		for (int j = s; j < d; j++) {
			time[j]++;
			if (time[j] > cars)cars = time[j];
		};

	}
	cout << cars << endl;
	return 0;
}
