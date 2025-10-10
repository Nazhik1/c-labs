#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "RUS");
	struct time { int hours; int minutes; int seconds; };
	time t;
	cout << "Введите время: ";
	cin >> t.hours >> t.minutes >> t.seconds;
	long totalsecs = t.hours * 3600 + t.minutes * 60 + t.seconds;
	cout << "Кол-во секунд: " << totalsecs;
}