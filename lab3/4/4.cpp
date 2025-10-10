#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "RUS");
	struct time { int hours; int minutes; int seconds; }; //Создаём структуру для времени
	time t;
	cout << "Введите время: ";
	cin >> t.hours >> t.minutes >> t.seconds; //Вводим время в виде структуры
	long totalsecs = t.hours * 3600 + t.minutes * 60 + t.seconds; //Считаем секунды и выводим
	cout << "Кол-во секунд: " << totalsecs;
}