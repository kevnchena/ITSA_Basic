#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

void split(const string& s,char delim,vector<string>& cards) {
	stringstream ss(s);
	string item;
	while()

}

void sort(vector<string>)

int main()
{
	int n;
	cin >> n;
	vector<strinig> cardDeck[10];
	cin.ignore();

	for (int i = 0; i < n; i++) 
	{
		string cardString;
		
		getline(cin, cardString);//可以讀空格
		split(cardString, '', cardDeck[i]);
		sort(cardDeck[i]);
	}
	for (int i = 0; i < n; i++) {
		display(card)
	}
}
