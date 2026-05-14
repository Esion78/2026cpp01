#include <cstring>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string s1("abc");
	string s2 = "abcd";
	cout << (s1 == s2) << endl;
	cout << boolalpha << (s1 == s2) << endl;	//true/false 형태 출력 지정
	cout << (s1 == s2) << endl;
	cout << noboolalpha;	//기본 형태로 지정, 0과 1
	cout << (s1 == s2) << endl;

	cin >> s2;
	cout << s2 << endl;
	//getline(cin, s2);
	//버퍼를 비우기위해 플러쉬 해야함
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	getline(cin, s2);
	cout << s2 << endl;

	return 0;
}