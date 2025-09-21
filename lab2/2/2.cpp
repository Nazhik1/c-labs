#include <iostream>;
using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	int a=1;
	while (a != 0){
		cout << "Введите число:";
		cin >> a;
		if (a == 0) {
			return 0;
		};
		double f=1;
		for (int n = 1; n != a + 1; n++) {
			f = f * n;
		}
		cout << f << endl;
	}
}