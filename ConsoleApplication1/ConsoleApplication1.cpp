#include<iostream>
#include<string>
using namespace std;

int main()
{	
	string input;
	int num = input[0] - '0' + input[1] - '0';
	switch (num) {
	case 3:
		cout << "Aquarius" << endl;
	case 5:
		cout << "Pisces" << endl;
	case 7:
		cout << "Aries" << endl;
	case 9:
		cout << "Taurus" << endl;
	case 11:
		cout << "Gemini" << endl;
	case 13:
		
	case 15:
		cout << "Leo" << endl;
	case 17:
		cout << "Virgo" << endl;
	case 19:
		cout << "Libra" << endl;
	case 21:
		cout << "Scorpio" << endl;
	case 23:
		cout << "Sagittarius" << endl;
	}
}
