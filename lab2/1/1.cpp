#include<iostream>;
#include<string>;
using namespace std;

int main() {
	for ( int n=1; n != 21; n++) {
		char ch = ' ';
		string num1(20 - n, ch);	// Вводим количество пробелом
		string num2(n, 'x');	//Вводим количество иксов
		string res = (num1 + num2) + "\n"; //Объединяем водну строку и выводим
		cout << res << endl;
	}
}