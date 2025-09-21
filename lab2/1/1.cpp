#include<iostream>;
#include<string>;
using namespace std;

int main() {
	int n = 1;
	for (n; n != 21; n++) {
		char ch = ' ';
		string num1(20 - n, ch);
		string num2(n, 'x');
		string res = (num1 + num2) + "\n";
		cout << res << endl;
	}
}