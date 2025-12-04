#include<iostream>;
#include <string>;
using namespace std;

struct employee { char name[20]; long id; };

employee a[3];

void getdata() {
	string s;
	cout << "¬ведите им€: " << endl;
	cin.get();
	getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		a[0].name[i] = s[i];
	}
	cout << "¬ведите номер:" << endl;
	cin >> a[0].id;

	cout << "¬ведите им€: " << endl;
	cin.get();
	getline(cin, s);
	for (int i = 0; i != s.size(); i++) {
		a[1].name[i] = s[i];
	}
	cout << "¬ведите номер:" << endl;
	cin >> a[1].id;

	cout << "¬ведите им€: " << endl;
	cin.get();
	getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		a[2].name[i] = s[i];
	}
	cout << "¬ведите номер:" << endl;
	cin >> a[2].id;

}

void putdata() {
	string s="";
	for (int i = 0; i != sizeof(a[0].name); i++) {
		s =s + a[0].name[i];
	}
	cout << "—отрудник ID:" << a[0].id << " »м€: " << s << endl;

	s = "";
	for (int i = 0; i != sizeof(a[1].name); i++) {
		s = s + a[1].name[i];
	}
	cout << "—отрудник ID:" << a[1].id << " »м€: " << s << endl;

	s = "";
	for (int i = 0; i != sizeof(a[2].name); i++) {
		s = s + a[2].name[i];
	}
	cout << "—отрудник ID:" << a[2].id << " »м€: " << s << endl;
}

int main() {
	setlocale(LC_ALL, "RUS");
	int a = 1;
	do {
		cout << "¬ведите 1 чтобы ввести данные, 2 чтобы вывести, другое чтобы закончить" << endl;
		cin >> a;
		if (a == 1) {
			getdata();
		}
		else if (a == 2) {
			putdata();
		}
		else
		{
			break;
		}
	} while (a != 0);
}