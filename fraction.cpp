#include<iostream>
using namespace std;
class fraction
{
    private:
    int a,b,c,d;

    public:

    void input()
    {
        cin>>a>>b>>c>>d;
    }
    void add(fraction f)
    {
        int num=a*f.b+f.a*b;
        int den=b*f.b;
        cout<<"Addition:"<<endl;
        cout<<"Num:"<<num<<endl;
        cout<<"Den:"<<den<<endl;
    }
    void sub(fraction f)
    {
        int num=(a*f.b)-f.a*b;
        int den=b*f.b;
        cout<<"Subtraction:"<<endl;
        cout<<"Num:"<<num<<endl;
        cout<<"Den:"<<den<<endl;
    }
};

int main()
{
    fraction f1,f2;
    cout<<"Enter a and b:";
    f1.input();
    cout<<"Enter c and d:";
    f2.input();

    f1.add(f2);
    f1.sub(f2);
    
    return 0;
}