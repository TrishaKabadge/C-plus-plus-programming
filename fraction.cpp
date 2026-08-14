#include <iostream>
using namespace std;

class fraction
{
private:
    int a, b, c, d;

public:

    void input1()
    {
        cin >> a >> b;
    }

    void input2()
    {
        cin >> c >> d;
    }

    void add(fraction f)
    {
        int num = (a * f.d) + (f.c * b);
        int den = b * f.d;

        cout << "Addition:" << endl;
        cout << "Num:" << num << endl;
        cout << "Den:" << den << endl;
    }

    void sub(fraction f)
    {
        int num = (a * f.d) - (f.c * b);
        int den = b * f.d;

        cout << "Subtraction:" << endl;
        cout << "Num:" << num << endl;
        cout << "Den:" << den << endl;
    }
};

int main()
{
    fraction f1, f2;

    cout << "Enter a and b: ";
    f1.input1();

    cout << "Enter c and d: ";
    f2.input2();

    f1.add(f2);
    f1.sub(f2);

    return 0;
}