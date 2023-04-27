#include<iostream>
#include<string>
#include<map>
using namespace std;



int main()
{	
	string input;
	getline(cin, input);
	int month = (input[0] - '0')*10 + input[1] - '0';
	int day = (input[3] - '0')*10 + input[4] - '0';
	int sum = month * 30 + day;
	if (sum >= 382 || sum <= 50) {
		cout << "Capricorn" << endl;
	}else if (sum <= 78) {
		cout << "Aquarius" << endl;
	}
	else if (sum <=110 ) {
		cout << "Pisces" << endl;
	}
	else if (sum <= 140) {
		cout << "Aries" << endl;
	}
	else if (sum <=171 ) {
		cout << "Taurus" << endl;
	}
	else if (sum <=201) {
		cout << "Gemini" << endl;
	}
	else if (sum <=232) {
		cout << "Cancer" << endl;
	}
	else if (sum <= 263) {
		cout << "Leo" << endl;
	}
	else if (sum <= 293) {
		cout << "Virgo" << endl;
	}
	else if (sum <= 352) {
		cout << "Scorpio" << endl;
	}
	else if (sum <= 381) {
		cout << " Sagittarius" << endl;
	}
}
