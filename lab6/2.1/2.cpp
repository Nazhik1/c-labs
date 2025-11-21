#include<iostream>;
using namespace std;

class employee {
private:
	int id;
	float oklad;
public:
	void add(int i, float o) {
		id = i;
		oklad = o;
	}

	void out() {
		cout << "ID: " << id << " Оклад: " << oklad << endl;
	}
};

int main() {
	setlocale(LC_ALL, "RUS");
	employee emp1;
	employee emp2;
	employee emp3;
	int i;
	float o;
	cout << "Введите данные 3 сотрудников: " << endl;
	cin >> i >> o;
	emp1.add(i, o);
	cin >> i >> o;
	emp2.add(i, o);
	cin >> i >> o;
	emp3.add(i, o);
	cout << "Данные: " << endl;
	emp1.out();
	emp2.out();
	emp3.out();
}