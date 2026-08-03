#include<iostream>
using namespace std;
class object
{
 public:
 int a;
 
 void input()
 {
  cout<<"Enter a:";
  cin>>a;
 }
 void num()
 {
 if(a%2==0)
 cout<<"a is even";
 else
 cout<<"a is odd";
 }
};
 int main()
 {
 object n1;
 n1.input();
 n1.num();
 
 return 0;
 }
