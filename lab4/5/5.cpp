#include<iostream>;
using namespace std;

// int n = 0;

void call() {
	static int n = 0;
	n += 1;
	cout << "Кол-во вызовов:" << n << endl;
}

int main() {
	setlocale(LC_ALL, "RUS");
	int a=1;
	while (a > 0) {
		cin >> a;
		for (int i = 0; i < a; i++) {
			call();
		};
		//cout << " Кол-во вызовов:" << n << endl;
	}
}