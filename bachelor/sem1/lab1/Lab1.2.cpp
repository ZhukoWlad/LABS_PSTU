#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int m;
    cout << "Введите элемент m: ";
    cin >> m;

    int n;
    cout << "Введите элемент n: ";
    cin >> n;

    int a = ++n * ++m;
    cout << "1) ++n * ++m\t" << a << endl;

    bool b = m++ < n;
    cout << "2) m++ < n\t" << b << endl;

    bool c = n++ > m;
    cout << "3) n++ > m\t" << c << endl;

    return 0;
}