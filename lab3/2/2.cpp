#include <iostream>;
using namespace std;

int main(){   
    setlocale(LC_ALL, "RUS");
    enum etype { laborer = 'l', secretary = 's', manager = 'm', accountant='a', executive='e', researcher='r' };
    char a;
    cout << "Введите первую букву должности: ";
    cin >> a;
    switch (a)
    {
        case etype::laborer:
            cout << "Полное название: laborer";
            break;
        case etype::secretary:
            cout << "Полное название: secretary";
            break;
        case etype::manager:
            cout << "Полное название: manager";
            break;
        case etype::accountant:
            cout << "Полное название: accountant";
            break;
        case etype::executive:
            cout << "Полное название: executive";
            break;
        case etype::researcher:
            cout << "Полное название: researcher";
            break;
    }
}