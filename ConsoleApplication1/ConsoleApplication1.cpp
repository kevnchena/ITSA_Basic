#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;



void split(const string& s, char delim, vector<string>& cards) {
    stringstream ss(s);
    string item;
    while (getline(ss, item, delim)) {
        cards.push_back(item);
    }
}



int value(string& card) {
    char cardType = card.at(0);
    int cardNumber = stoi(card.substr(1));
    int cardValue = 0;
    switch (cardType) {
    case 'S':
    case 's':
        cardValue = 1000 + cardNumber;
        break;
    case 'H':
    case 'h':
        cardValue = 100 + cardNumber;
        break;
    case 'D':
    case 'd':
        cardValue = 10 + cardNumber;
        break;
    case 'C':
    case 'c':
        cardValue = cardNumber;
        break;
    }
    return cardValue;
}



void sort(vector<string>& cards) {
    for (int i = 0; i < cards.size(); i++) {
        for (int j = i + 1; j < cards.size(); j++) {
            if (value(cards[i]) < value(cards[j])) {
                string temp = cards[i];
                cards[i] = cards[j];
                cards[j] = temp;
            }
        }
    }
}



void display(vector<string>& cards) {
    //for (auto card : cards) {
    //    cout << card << " ";
    //}



    int n = cards.size();
    for (int i = 0; i < n; i++) {
        if (i != n - 1) cout << cards[i] << " ";
        else cout << cards[i];
    }
    cout << endl;
}



int main()
{
    int n;
    cin >> n;
    vector<string> cardDeck[10];
    cin.ignore();



    for (int i = 0; i < n; i++) {
        string cardString;



        getline(cin, cardString);
        split(cardString, ' ', cardDeck[i]);
        sort(cardDeck[i]);

    }
    for (int i = 0; i < n; i++) {
        display(cardDeck[i]);
    }
}
