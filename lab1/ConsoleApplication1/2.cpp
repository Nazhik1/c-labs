#include<iostream>;
using namespace std;
int main() {
	float c;
	float f;
	cin >> c; //Ввожу градусы по Цельсию
	f = c * 9 / 5 + 32; //Перевожу в градусы по Фаренгейту
	cout << f; //Вывожу градусы по Фаренгейту
}