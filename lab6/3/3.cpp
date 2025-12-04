#include<iostream>;
#include<string>;
using namespace std;

class date {
private:
	int day;
	int month;
	int year;

public:
	void gatdate(string s) {
		day = stoi(s.substr(0, 2));
		month = stoi(s.substr(3, 5));
		year = stoi(s.substr(6, 7));
	}

	void showdate() {
		cout << "Дата: " << endl << day << '/' << month << '/' << year;
	}
};

int main() {
	setlocale(LC_ALL, "RUS");
	string s;
	date d;
	cout << "Введите дату: " << endl;
	cin >> s;
	d.gatdate(s);
	d.showdate();
}