#include<iostream>;
using namespace std;

struct employee { char name[2]; long id; };

employee a[3];

void getdata() {
	cout << "Введите данные: " << endl;
	cin >> a[0].name[0] >> a[0].name[1] >> a[0].id;
	cin >> a[1].name[0] >> a[1].name[1] >> a[1].id;
	cin >> a[2].name[0] >> a[2].name[1] >> a[2].id;

}

void putdata() {
	cout << "Сотрудник ID:" << a[0].id << " Имя: " << a[0].name[0] << " " << a[0].name[1] << endl;
	cout << "Сотрудник ID:" << a[1].id << " Имя: " << a[1].name[0] << " " << a[1].name[1] << endl;
	cout << "Сотрудник ID:" << a[2].id << " Имя: " << a[2].name[0] << " " << a[2].name[1] << endl;
}

int main() {
	setlocale(LC_ALL, "RUS");
	int a = 1;
	do {
		cout << "Введите 1 чтобы ввести данные, 2 чтобы вывести, другое чтобы закончить" << endl;
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