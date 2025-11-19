#include<iostream>;
using namespace std;

struct time { int hours; int minutes; int seconds; };

void swap(struct time& a, struct time& b) {
	struct time c;
	c = a;
	a = b;
	b = c;

}

int main() {
	struct time a, b;
	cin >> a.hours >> a.minutes >> a.seconds;
	cin >> b.hours >> b.minutes >> b.seconds;
	swap(a, b);
	cout << endl << a.hours << " " << a.minutes << " " << a.seconds << endl;
	cout << b.hours << " " << b.minutes << " " << b.seconds << endl;
}