#include<iostream>
using namespace std;
class object
{
 public:
 int a,b;
 
 void input()
 {
  cout<<"Enter a:";
  cin>>a;
  cout<<"Enter b:";
  cin>>b;
 }
 void compare()
 {
 if(a>b)
 cout<<"a is greatest";
 else
 cout<<"b is greatest";
 }
};
 int main()
 {
 object n1;
 n1.input();
 n1.compare();
 
 return 0;
 }
  
