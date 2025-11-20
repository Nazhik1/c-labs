#include <iostream>;
using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	struct fraction { double chis; double znam; };
	int size;
	cout << "Введите кол-во элементов:";
	cin >> size;
	fraction* a = new fraction[size];
	cout << "Введите элементы: " << endl;
	for (int i = 0; i < size; i++) {
		cin >> a[i].chis >> a[i].znam;
	}
	double sr=0;
	for (int i = 0; i < size; i++) {
		sr = sr + a[i].chis / a[i].znam;
	}
	sr = sr / size;
	cout << sr;
}