#include<iostream>;
using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	struct employee { int n; float z; };
	employee emp1, emp2, emp3;
	cout << "Введите данные трёх сотрудников: " << endl;
	cin >> emp1.n >> emp1.z;
	cin >> emp2.n >> emp2.z;
	cin >> emp3.n >> emp3.z;
	cout << "Данные первого сотрудника: " << emp1.n << ' ' << emp1.z << endl;
	cout << "Данные второго сотрудника: " << emp2.n << ' ' << emp2.z << endl;
	cout << "Данные третьего сотрудника: " << emp3.n << ' ' << emp3.z << endl;
}