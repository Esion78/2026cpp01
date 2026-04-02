//heap memory(동적 메모리) : dynamic memory allocation(동적 할당)
#include <iostream>
using namespace std;

int main()
{
	//int humans = 100;
	//int ages[humans];

	int age, totalPrice = 0;
	//int* a = &age;	//포인터 변수는 메모리 주소값만 받는다
	int humans = 0;
	cout << "몇 분? ";
	cin >> humans;
	int* ages = new int[humans];	//heap memory(동적 메모리)

	for (int i = 0; i < humans; i++) {
		cout << "나이? ";
		cin >> age;
		*(ages + i) = age;
	}
	int kid = 5000, adult = 10000, senior = 7000;

	for (int i = 0; i < humans; i++) {
		//cout << *(ages + i) << "\n";
		age = ages[i];	//포인터는 배열처럼 사용 가능
		if (age >= 65) {
			totalPrice += senior;
		}
		else if(age>=19){
			totalPrice += adult;
		}
		else {
			totalPrice += kid;
		}
	}
	cout << "총 요금 : " << totalPrice;
	//cout << ages << "\n";
	//cout << &humans << "\n";	//& -> 메모리 주소
	//cout << &age << "\n";	//humans와 같은 stack memory에 저장

	delete[] ages;//free memory
	return 0;
}