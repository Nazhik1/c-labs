#include <iostream>;
using namespace std;

int main(){
	setlocale(LC_ALL, "RUS");
	struct fraction { int chis; int znam; }; //Создаём структуру для дробей 
	fraction f1, f2, f3;
	char ch;
	cout << "Введите первую дробь: ";
	cin >> f1.chis >> ch >> f1.znam;
	cout << "Введите вторую дробь:";
	cin >> f2.chis >> ch >> f2.znam;
	f3.chis = f1.chis * f2.znam + f2.chis * f1.znam; // Считаем числитель и знаменатель дроби и сохраняем в такую же структуру
	f3.znam = f1.znam * f2.znam;
	if ((f3.chis % f3.znam) == 0) {
		cout << "Сумма равна: " << f3.chis / f3.znam;
	}
	else if ((f3.znam % f3.chis) == 0) {
		cout << "Сумма равна: " << f3.chis / f3.chis << '/' << f3.znam / f3.chis;
	}
	else {
		cout << "Сумма равна: " << f3.chis << "/" << f3.znam;
	}
}