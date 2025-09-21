#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    double a,b,c;
    cout << "Введите начальный вклад:";
    cin >> a;
    cout << "Введите число лет:";
    cin >> b;
    cout << "Введите процентную ставку:";
    cin >> c;
    for (int i=1; i!=b+1;i++){
        a = a + (a * c/100);
        if (i != b) { cout << "В конце" << i << "-го года вы получите: " << a << endl;}
    }
    cout << endl << "Через 10 лет вы получите: " << a << endl;
}