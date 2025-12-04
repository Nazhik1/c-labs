#include<iostream>;
#include<string>;
using namespace std;

class date {
private:
	int day;
	int month;
	int year;

public:
	void getdate(string s) {
		day = stoi(s.substr(0, 2));
		month = stoi(s.substr(3, 5));
		year = stoi(s.substr(6, 7));
	}

	void showdate() {
		cout << "Дата: " << endl << day << '/' << month << '/' << year;
	}
};

class employee {
private:
	int id;
	float oklad;
	date d1;
	enum etype { lab, sec, man };
public:
	void add(int i, float o, string d, etype t) {
		id = i;
		oklad = o;
		etype = t;
		d1.getdate(d);
	}

	void out() {
		cout << "ID: " << id << " Оклад: " << oklad << "Дата: ";
		d1.showdate();
		cout << "Тип: " << type << endl;
	}
};

int main() {
	setlocale(LC_ALL, "RUS");
	employee emp1;
	employee emp2;
	employee emp3;
	int i;
	float o;
	string s;
	
	cout << "Введите данные 3 сотрудников: " << endl;
	cin >> i >> o;
	emp1.add(i, o, s, lab);
	cin >> i >> o;
	emp2.add(i, o, s, etype::lab);
	cin >> i >> o;
	emp3.add(i, o, s, etype::lab);
	cout << "Данные: " << endl;
	emp1.out();
	emp2.out();
	emp3.out();
}