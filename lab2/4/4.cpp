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
	 double dolg = (price - vznos);
	 dolg = dolg + proc * dolg;
	 double yearplat = dolg / years;
	 int num = 1;
	for (int i =years; i!=1 ; i--){
		double plat = 0;
		plat = proc * dolg + yearplat;
		cout << "Платёж за " << num << " год: " << plat << endl;
		dolg = dolg - plat;
		cout << "Долг: " << dolg << endl;
		years--;
		num++;
	}
	cout << "Платёж за " << num << " год: " << dolg << endl;
}