#include <iostream>;
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	float decpounds;
	cout << "Введите дес. фунты: ";
	cin >> decpounds; //Ввожу десятичные фунты
	float pounds,decfrac,pens,frac;
	pounds = static_cast<int>(decpounds); //Беру целую часть от них
	decfrac = (decpounds - pounds) * 20;  //Считаю десятичные шиллинги
	frac = static_cast<int>(decfrac);	  //Беру целую часть от них
	pens = static_cast<int>((decfrac - frac) * 12); //Считаю пенсы
	
	cout << "Старые фунты: " << pounds << "." << frac << "." << pens; //Вывожу получившие величины через точки
}