#include <iostream>;
using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	int a=1;
	while (a != 0){ // Программа будет работать пока пользователь не введёт 0
		cout << "Введите число:";
		cin >> a;
		if (a == 0) { // Если ввели 0 то функция не выведет ничего и программа завершится
			return 0;
		};
		double f=1;
		for (int n = 1; n != a + 1; n++) { // Считаем факториал числа
			f = f * n;
		}
		cout << f << endl;
	}
}