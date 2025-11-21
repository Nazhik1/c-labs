#include<iostream>;
using namespace std;

class Double {
private:

	double a;

public:

	void del() {
		a = 0;	
	}

	void set(double b) {
		a = b;
	}

	void add(double b) {
		a += b;
	}

	void out() {
		cout << "Итог: " << a;
	}
};

int main() {
	setlocale(LC_ALL, "RUS");
	Double d;
	double b;
	int x = 0;
	cout << "1 - Удалить. 2 - Ввести. 3 - Добавить. 4 - Вывести" << endl;
	do {
		cin >> x;
		if (x == 1) {
			d.del();
			cout << "Удалено" << endl;
		}
		else if (x == 2) {
			cout << "Введите число: ";
			cin >> b;
			d.set(b);
		}
		else if (x == 3) {
			cout << "Сколько добавить: ";
			cin >> b;
			d.add(b);
		}
		else if (x == 4) {
			d.out();
		}
	} while (x > 0);
}