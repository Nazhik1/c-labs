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
	int chis = (a * d + b * c);
	int znam = b * d;
	if ((chis % znam) == 0) {
		cout << "Сумма равна: " << chis/znam;
	} else if ((znam%chis)==0){
		cout << "Сумма равна: " << chis / chis << '/' << znam / chis;
	}
	else {
		cout << "Сумма равна: " << (a * d + b * c) << "/" << b * d;
	}
}