#include<iostream>
#include<sstream>
#include<string>
#include<map>
using namespace std;

struct cool {
	int id;
	string name;
	int age;

};


int main()
{	
	
	//map <int, string> studentMap;//前面是key，後面是value

	////插入元素

	//studentMap.insert(pair<int, string>(1, "Tom"));
	//studentMap.insert(pair<int, string>(7, "Jack"));
	//studentMap.insert(pair<int, string>(15, "john"));

	////使用陣列的話新資料會覆蓋舊資料
	//studentMap[1] = "Tom";
	//studentMap[7] = "Jack";
	//studentMap[15] = "John";

	//map<int, string>studentMap2 = {
	//	{1,"Tommy"},
	//	{2,"Jacky"},
	//	{3,"Johnny"}
	//};

	//cout << "name: " << studentMap[1] << "\n";

	map<int, string>studentMap = {
		{1,"Tom"},
		{3,"John"},
		{2,"Jack"}
	};
	studentMap[5] = "Tiffany";
	studentMap[4] = "Ann";

	for (const auto& s : studentMap)
	{ //range base for loop
		cout << "id: " << s.first << " name: " << s.second << endl;
		//                key值                   value值
	}
		cout << endl;
	
	//前向迭代器
		for (map<int, string>::iterator it = studentMap.begin(); it != studentMap.end();it++)
	{
			cout << "id: " << (*it).first << "name: " << (*it).second << endl;
	}
		cout << endl;
	//使用反向迭代器的例子，如果嫌 iterator 迭代器名稱太長的話可以善用 auto 關鍵字讓編譯器去推導該變數類型
		for (auto it = studentMap.rbegin(); it != studentMap.rend(); it++) 
	{
			cout << "id: " << (*it).first << "name: " << (*it).second << endl;
	}

		//使用string當key值

		map<string, int>student3 = {
			{"Kevin",1},
			{"David",2},
			{"Jin",3}
		};

		for (const auto& n : student3) {
			cout << "Key:" << n.first << " Value: " << n.second << endl;

		};
		
		//使用string當key,自訂當value
		
		map<string, cool>student4;
			student4["Tom"] = {3,"Tom",18};
			student4["Jack"] = { 2,"Jack",24 };
			student4["Alex"] = { 1,"Alex",22 };
		
			for (const auto& n : student4) {

				cout << "name: " << n.first<<" id: " << n.second.id << " age: " << n.second.age << endl;
			};
		//刪除erase()
			studentMap.erase(1);
			for (const auto& m : studentMap) {
				cout << m.first << " " << m.second << endl;
			};

		//清空容器
			//studentMap.clear();
			if (studentMap.empty()) {
				cout << "空了\n";
			}
			else {cout<<"沒空，容量還有 " << studentMap.size() << endl;};
}
