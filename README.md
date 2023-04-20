# 撲克牌大小

## 問題描述 ：

撲克牌的遊戲有很多種，像是大老二、撿紅點等。然而，現在您要參與的是比大小遊戲，每張牌各有其花色和數字，大小比較主要以花色為主，黑桃 > 紅心 > 方塊 > 梅花；倘若花色相同時，則比較數字。

### 輸入說明 ：

第一列的整數，代表撲克牌的疊數，其後有若干列，每列即為一疊牌的內容，每張牌分別以英文、數字作表示，其中 S 代表黑桃、 H 代表紅心、 D 代表方塊、 C 代表梅花。每筆資料分別以空白隔開。

### 輸出說明 ：

印出排列過後的撲克牌。一行是一 疊 牌， 每張牌以空白隔開。

## 範例 ：

### 輸入範例

4  
H5 D4 S2 C13  
D8 S3 D10 C12 H7  
H6 S3  
C5 D11 S1  

### 輸出範例

S2 H5 D4 C13  
S3 H7 D10 D8 C12  
S3 H6  
S1 D11 C5  

```
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
```
