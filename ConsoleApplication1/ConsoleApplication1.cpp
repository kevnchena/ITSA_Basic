#include<iostream>
#include<string>
using namespace std;

int main()
{
	string answer, input;
	string endcode = "0000";
	int A, B;
	cin >> answer;

	do {
		cin >> input;
		if (input == "0000")break;
		A = 0;
		B = 0;
		for (int i = 0; i < 4; i++) {
			if (answer[i] == input[i])A++;

			else {
				for (int j = 0; j < 4; j++)if (answer[i] == input[j]) B++;
			}
		}
	cout << A << 'A' << B << 'B' << endl;
	} while (1);

}
