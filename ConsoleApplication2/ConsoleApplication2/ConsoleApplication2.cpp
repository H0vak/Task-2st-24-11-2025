#include <iostream>
#include <algorithm>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b, c;
    cout << "Введіть a b c (ціна, гроші, кількість пляшок в автоматі): ";
    if (!(cin >> a >> b >> c)) return 0;

    int canBuy = b / a;
    int answer = min(canBuy, c);

    cout << "Максимальна кількість пляшок: " << answer << endl;

    return 0;
}