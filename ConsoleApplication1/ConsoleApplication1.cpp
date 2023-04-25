#include<iostream>
#include<string>
using namespace std;

int main()
{	
	string input;
	getline(cin, input);
	int num = input[0] - '0' + input[1] - '0';
	int num2 = input[3] - '0' + input[4] - '0';
	if (num == 13) {
		cout<<"yes" << endl;
	}
	else {
		switch (num) {
		case 3:
			cout << "Aquarius" << endl;
			break;
		case 5:
			cout << "Pisces" << endl;
			break;
		case 7:
			cout << "Aries" << endl;
			break;
		case 9:
			cout << "Taurus" << endl;
			break;
		case 11:
			cout << "Gemini" << endl;
			break;
		case 15:
			cout << "Leo" << endl;
			break;
		case 17:
			cout << "Virgo" << endl;
			break;
		case 19:
			cout << "Libra" << endl;
			break;
		case 21:
			cout << "Scorpio" << endl;
			break;
		case 23:
			cout << "Sagittarius" << endl;
			break;
		}
	}
}
