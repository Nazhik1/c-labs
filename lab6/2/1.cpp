#include<iostream>;
using namespace std;

class Double {
private:

	double a;

public:

	Double() = default;

	Double(double b) {
		a = b;
	}

	void del() {
		a = 0;
	}

	void set(double b) {
		a = b;
	}

	void add(double b) {
		a += b;
	}

	void out() {
		cout << "Итог: " << a;
	}

	double add(Double d) {
		a = a + d.a;
		return a;
	}

};

int main() {
	setlocale(LC_ALL, "RUS");
	Double d1(2);	
	Double d2(4);
	Double d3;
	double x = d1.add(d2);
	d3.set(x);
	d3.out();
}