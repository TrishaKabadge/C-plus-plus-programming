#include <iostream>
using namespace std;

class fraction
{
private:
    int a, b;

public:
    void input()
    {
        cin >> a >> b;
    }

    void add(fraction f)
    {
        int num = a * f.b + f.a * b;
        int den = b * f.b;

        cout << "Addition:" << endl;
        cout << "Numerator = " << num << endl;
        cout << "Denominator = " << den << endl;
    }

    void sub(fraction f)
    {
        int num = a * f.b - f.a * b;
        int den = b * f.b;

        cout << "Subtraction:" << endl;
        cout << "Numerator = " << num << endl;
        cout << "Denominator = " << den << endl;
    }
};

int main()
{
    fraction f1, f2;

    cout << "Enter numerator and denominator of first fraction: ";
    f1.input();

    cout << "Enter numerator and denominator of second fraction: ";
    f2.input();

    f1.add(f2);
    f1.sub(f2);

    return 0;
}