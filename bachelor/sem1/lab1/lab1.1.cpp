#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

template <typename T>
void FindResult(T a, T b, int c)
{
    T first_value = pow(a + b, 4);

    T value1 = pow(a, 4);
    T value2 = 4 * pow(a, 3) * b;
    T second_value = value1 + value2;

    T value3 = 6 * pow(a, 2) * pow(b, 2);
    T value4 = 4 * a * pow(b, 3);
    T value5 = pow(b, 4);
    T second_result = value3 + value4 + value5;

    T first_result = first_value - second_value;
    T result = first_result / second_result;

    cout << "======" << typeid(T).name() << "======" << "\n";
    cout << setprecision(c);

    cout << "(a+b)^4: " << first_value << "\n\n";
    cout << "a^4: " << value1 << "\t4a^3b: " << value2 << "\n";
    cout << "(a^4 + 4a^3b): " << second_value << "\n\n";
    cout << "6a^2b^2: " << value3 << "\t4ab^3: " << value4 << "\tb^4: " << value5 << "\n";
    cout << "(6a^2b^2 + 4ab^3 + b^4): " << second_result << "\n\n";
    cout << "(a+b)^4 - (a^4 + 4a^3b): " << first_result << "\n";
    cout << "result = " << result << "\n\n\n";
}

int main()
{
    setlocale(LC_ALL, "ru");

    cout << fixed;

    FindResult(100.0f, 0.001f, 7);
    FindResult(100.0, 0.001, 15);

    return 0;
}
