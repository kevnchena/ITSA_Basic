#include<iostream>


using namespace std;
void swap(int& a, int& b) {//排列
	int temp;

	temp = a;
	a = b;
	b = temp;
}

int value(int a) {//計算各個值
	int sum = 0;
	do 
	{
		sum += a % 10;
	} while (a /= 10);
	return sum;
}
int main()
{
	int n;
	int answer[10] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> answer[i];
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{

			if (value(answer[i]) > value(answer[j]))//比加總的值
			{
				swap(answer[i], answer[j]);
			}
			else if (value(answer[i]) == value(answer[j]))//如果加總值相等
			{
				if (answer[i] > answer[j])//比原始值
				{
					swap(answer[i], answer[j]);
				}
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << answer[i];
		if (i < n-1)cout<< " ";
		else cout << endl;
	}
	return 0;
}