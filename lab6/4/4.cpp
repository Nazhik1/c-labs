#include<iostream>;
using namespace std;

class Time {
private:
	int sec;
	int min;
	int hour;

public:
	Time(int a=0) {
		sec = a;
		min = a;
		hour = a;
	}

	Time(int a, int b, int c) {
		hour = a;
		min = b;
		sec = c;
	}

	void out() {
		cout << hour << ":" << min << ":" << sec << endl;
	}

	void summ(Time t1, Time t2) {
		sec = (t1.sec + t2.sec)%60;
		min = (t1.min + t2.min + (t1.sec + t2.sec)/60)%60;
		hour = t1.hour + t2.hour + ((t1.min + t2.min + (t1.sec + t2.sec) / 60))/60;
	}
};

int main() {
	const Time t1(10,35,36);
	const Time t2(11,25,47);
	Time t3;
	t3.summ(t1, t2);
	t3.out();
}