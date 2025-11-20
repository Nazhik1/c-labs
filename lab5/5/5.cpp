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
	cin >> a[0].f >> a[0].d;
	cin >> a[1].f >> a[1].d;
	cin >> a[2].f >> a[2].d;
	cin >> a[3].f >> a[3].d;
	cin >> a[4].f >> a[4].d;
	double s = sr(a, n);
	cout << s;
}