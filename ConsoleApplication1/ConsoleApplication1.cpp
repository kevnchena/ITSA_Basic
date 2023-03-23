#include<iostream>  
#include<string>  
using namespace std;

int main()
{
    int number;

    cin >> number;
    string str =to_string(number);
    string newstring;

    for (int i = str.length() - 1; i >= 0; i--) {

        newstring.push_back(str[i]);
    }
    if (newstring == str)cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;

}