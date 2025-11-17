#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    double a,b,c;   //Вводим все данные
    cout << "Введите начальный вклад:";
    cin >> a;
    cout << "Введите число лет:";
    cin >> b;
    cout << "Введите процентную ставку:";
    cin >> c;
    for (int i=1; i!=b+1;i++){
        a = a + (a * c/100); //Считаем сумму с процентами
        if (i != b) { cout << "В конце " << i << "-го года вы получите: " << a << endl;} // Выводим сумму в отпределённый год
    }
    cout << endl << "Через " << b <<  " лет вы получите : " << a << endl; // Выводим итогувую сумму
}