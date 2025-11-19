#include<iostream>;
using namespace std;

long hms_to_secs(int h, int m, int s) {
	long res = h * 3600 + m * 60 + s;
	return res;
}

int main() {
	setlocale(LC_ALL, "RUS");
	int h, m, s;
	int a = 1;
	while (a > 0) {
		cout << "¬ведите врем€:";
		cin >> h >> m >> s;
		cout << hms_to_secs(h, m, s) << endl;
	}
}