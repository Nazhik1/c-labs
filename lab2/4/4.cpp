#include<iostream>;
#include<cmath>;
using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	double price;
	cout << "Стоимость квартиры: ";
	cin >> price;
	double vznos;
	cout << "Начальный взнос: ";
	cin >> vznos;
	double years;
	cout << "Число лет ипотеки: ";
	cin >> years;
	double proc;
	cout << "Процентная ставка: ";
	cin >> proc;
	proc = proc / 100;
	double m = years * 12;
	double dolg = (price - vznos);
	double mproc = proc / 12;
	double plat = dolg * mproc / (1 - pow(1 + mproc, -m));
	int pay = 0;
	cout << "Ежемесячный платёж" << plat << endl;
	for (int i = 1; i != years+1; i++) {
		dolg = dolg - plat * 12;
		double yplat = plat * 12;
		pay = pay + yplat;
		cout << "Выплата за " << i << "год: " << pay << endl;
	}

}