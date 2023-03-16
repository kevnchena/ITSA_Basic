#include<iostream>
using namespace std;

//void compare(char a)

int main()
{
	/*int n;
	cin >> n;
	char a[50];
	cin >> a;
	cout << a << endl;*/

	//它們的ASCII 排序剛好是大到小

	/*cout << "S" << " " << (int)'S' << endl;
	cout <<"H" << " " << (int)'H'<< endl;
	cout <<"D" << " " << (int)'D5' << endl;
	cout <<"C" << " " << (int)'C5' << endl;*/

	char c[10];

	while (true)
	{
		cin.getline(c,100);
		cout << "得到"<< c  <<" "<<(int)c[0]<<(int)c[1] << endl; }
	
	return 0;
}
