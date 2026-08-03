#include<iostream>
using namespace std;
class cal
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
  void sum()
  {
   cout<<"Sum:"<<a+b<<endl;
  }
  void sub()
  {
   cout<<"Sub:"<<a-b<<endl;
  }
};
int main()
{
 cal n1;
 n1.input();
 n1.sum();
 n1.sub();
 
 return 0;
}
   
   

