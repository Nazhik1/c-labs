#include <iostream>
using namespace std;
int main(){
    setlocale(LC_ALL, "RUS");
    struct time { int hours; int minutes; int seconds; }; //Создаём структуру времени
    time t1, t2, t3;
    char ch;
    cout << "Введите первое время: ";
    cin >> t1.hours >> ch >> t1.minutes >> ch >> t1.seconds; // Вводим 2 времени 
    cout << "Введите второе время: ";
    cin >> t2.hours >> ch >> t2.minutes >> ch >> t2.seconds;
    long totalsecs1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds; //Переводим их в секунды
    long totalsecs2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    long totalsecs = totalsecs1 + totalsecs2; //Считаем сумму времени и переводим обратно в формат структуры
    t3.seconds = totalsecs % 60;
    t3.minutes = (totalsecs / 60) % 60;
    t3.hours = totalsecs / 3600;
    cout << "Суммарное время: " << t3.hours << ':' << t3.minutes << ':' << t3.seconds; // Выводим результат через структуру
}
