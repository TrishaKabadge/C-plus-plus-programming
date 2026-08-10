#include<iostream>
using namespace std;
class complex

{
 private:
 int real,imag;
 
 public:
 
 void input()
 {
 cin>>real>>imag;
 }
 void add(complex c)
 {
 cout<<"Addition="<<real+c.real<<"+"<<imag+c.imag<<"i"<<endl;
 }
 void sub(complex c)
 {
 cout<<"Subtraction="<<real-c.real<<"+"<<imag-c.imag<<"i"<<endl;
 }
};
int main()
{
 complex c1,c2;
 cout<<"Enter real and imaginary numbers:";
 c1.input();
 cout<<"Enter real and imaginary numbers:";
 c2.input();
 
 c1.add(c2);
 c1.sub(c2);

 return 0;
}