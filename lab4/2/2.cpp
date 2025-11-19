#include <iostream>;
using namespace std;

struct time { int hours; int minutes; int seconds; };

long time_to_sec(int h, int m, int s) {
    long res = h * 3600 + m * 60 + s;
    return res;
}
struct time secs_to_time(long totalsecs) {
    struct time t3;
    t3.seconds = totalsecs % 60;
    t3.minutes = (totalsecs / 60) % 60;
    t3.hours = totalsecs / 3600;
    return t3;
}

int main() {
    setlocale(LC_ALL, "RUS");
    struct time t1, t2;
    cout << "Введите первое время: ";
    cin >> t1.hours;
    cin >> t1.minutes;
    cin >> t1.seconds;
    cout << "Введите второе время: ";
    cin >> t2.hours;
    cin >> t2.minutes;
    cin >> t2.seconds;
    long totalsecs1 = time_to_sec(t1.hours, t1.minutes, t1.seconds); 
    long totalsecs2 = time_to_sec(t2.hours, t2.minutes, t2.seconds);
    long totalsecs = totalsecs1 + totalsecs2;
    struct time t3 = secs_to_time(totalsecs);
    cout << "Суммарное время: " << t3.hours << ':' << t3.minutes << ':' << t3.seconds;
}