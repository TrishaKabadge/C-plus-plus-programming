#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int rollno;
    float marks;
    
void input()
{
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter roll no:";
    cin>>rollno;
    cout<<"Enter marks:";
    cin>>marks;
}
void display()
{
    cout<<"Name:"<<name<<endl;
    cout<<"Roll no:"<<rollno<<endl;
    cout<<"Marks:"<<marks<<endl;
}
};
int main()
{
    student s1;
    s1.input();
    s1.display();
    return 0;
}
