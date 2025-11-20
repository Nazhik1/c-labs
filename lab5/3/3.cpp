#include<iostream>;
#include <sstream>;
#include <string>;
using namespace std;

string reversit(string s) {
	setlocale(LC_ALL, "RUS");
	int size = s.size();
	string new_s="";
	char* a = new char[size];
	for (int i = 0; i < size; i++) {
		a[i] = s[i];
	}
	for (int i = 1; i < size+1; i++) {
		new_s.push_back(a[size-i]);
	}
	return new_s;
}

int main() {
	setlocale(LC_ALL, "RUS");
	string s;
	cout << "¬ведите строку: " << endl;
	getline(cin, s);
	cout << reversit(s);
}