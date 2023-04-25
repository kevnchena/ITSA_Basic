#include<iostream>
#include<string>

using namespace std;

int main()
{
	//宣告
	string input;//輸入
	int sum = 0;//輸出總和
	int	temp[11] = { 0 };//把輸入轉換後的暫存器
	
	cin >> input;
	
	//string轉換
	//string[]-數字('字元'也可以)後會強制變成int(ASCII碼)
	temp[0] = ((input[0] - 55) / 10)%10;//英文的十位數(除以10後的餘數)
	temp[1] = (input[0] - 55)%10;//英文的個位數
	for (int i = 2; i < 11; i++) {
		temp[i] = (input[i - 1]-'0');
	}
	
	//計算
	int count = 9;//遞減器
	sum += temp[0] + temp[9] + temp[10];//X1+N8+N9
	for (int j = 1; j <= 8; j++) {//從temp[1]開始到temp[8]
		sum += temp[j] * count;
		count--;
	}
	
	//判斷
	if(input[0]-'A' < 0 || input[0] - 'Z' > 0||input.length()>10)cout << "WRONG!!!" << endl;//設限範圍A~Z和輸入不能超過
	else if (sum % 10 == 0)cout << "CORRECT!!!"<<endl;
	else cout << "WRONG!!!"<<endl;


	return 0;
}
