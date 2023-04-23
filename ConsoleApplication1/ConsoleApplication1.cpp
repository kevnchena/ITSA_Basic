#include<iostream>
#include<string>
using namespace std;

int main()
{
	string answer, input;
	int A, B;//計算器
	cin >> answer;//答案

	do {
		cin >> input;//輸入
		if (input == "0000")break;//要放在cin下一列最好
		A = 0;//reset
		B = 0;
		for (int i = 0; i < 4; i++) {
			if (answer[i] == input[i])A++;//當下相等就A++

			else {
				for (int j = 0; j < 4; j++)if (answer[i] == input[j]) B++;//尋找字串中相等的數
			}
		}
	cout << A << 'A' << B << 'B' << endl;
	} while (1);

}
