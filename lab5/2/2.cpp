#include<iostream>;
using namespace std;

void maxint(int a[], int size) {
	int max = 0;
	int max_i=0;
	for (int i = 0; i < size; i++) {
		if (a[i] > max) {
			max = a[i];
			max_i = i;
		}
	}
	cout << "Наибольший элемент: " << max << endl << "Номер: " << max_i;
}

int main() {
	setlocale(LC_ALL, "RUS");
	int size;
	cout << "Введите кол-во элементов:" << endl;
	cin >> size;
	int* a = new int[size];
	cout << "Введите элементы: " << endl;
	for (int i = 0; i < size; i++) {
		cin >> a[i];
	}
	maxint(a, size);
}