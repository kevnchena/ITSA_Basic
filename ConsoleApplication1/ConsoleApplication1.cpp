#include<iostream>

using namespace std;

int main()
{
	int order,s,d;
	int time[25] = {0};
	int cars=0;
	cin >> order;

	for (int i = 0; i < order; i++) {//用for迴圈後s,d是分段輸入的

		cin >> s >> d;

		for (int j = s; j < d; j++) {//只增加s~d的範圍
			time[j]++;
			if (time[j] > cars)cars = time[j];//看時間有沒有重複
		};

	}
	cout << cars << endl;
	return 0;
}
