#include<iostream>;
using namespace std;


struct Distance { int f; int d; };
Distance a[5];
int n = size(a);

double sr(Distance a[5], int n) {
	double sr = 0;
	for (int i = 0; i < n; i++) {
		sr = sr + a[i].f * 12 + a[i].d;
	}
	sr = sr / n;
	return sr;
}

int main() {
	setlocale(LC_ALL, "RUS");
	cout << "¬ведите данные: " << endl;
	for (int i = 0; i < 5; i++) {
		cin >> a[i].f >> a[i].d;
	}
	double s = sr(a, n);
	cout << s;
}