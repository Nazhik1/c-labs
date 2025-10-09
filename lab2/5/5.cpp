#include<iostream>;
using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	char next = 'y';
	int a1, b1, c1, a2, b2, c2;
	int a3, b3, c3;
	do {
		cout << "Введите первую сумму: ";
		cin >> a1 >> b1 >> c1;
		cout << "Введите вторую сумму: ";
		cin >> a2 >> b2 >> c2;
		c3 = (c1 + c2) % 12;
		b3 = ((c1 + c2) / 12 + b1 + b2)%20;
		a3 = a1 + a2 + ((c1 + c2) / 12 + b1 + b2) / 20; // Считаем величины, разделяя целую часть и остаток от деления
		cout << a3 << ' ' << b3 << ' ' << c3;
		cout << endl << "Продолжить (у/n)?";
		cin >> next;
	} while (next == 'y'); // С помощью цикла do while программа будет работать пока не введём n
}