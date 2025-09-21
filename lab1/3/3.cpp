#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "RUS");
	int a, b, c, d;
	char ch;
	cout << "Введите первую дробь:";
	cin >> a >> ch >> b; //Вводим дробь с помощью 2 переменных и символа межу ними
	cout << "Введите вторую дробь:";
	cin >> c >> ch >> d;
	cout << "Сумма равна:" << (a * d + b * c) << "/" << b * d; // Считаем числитель и знаменатель суммы и выводим с помощью символа дроби между ними
}