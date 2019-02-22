#include<iostream>
using namespace std;
class Employee
{
 public:
 char name[20];
 int  num,b,d,it,ns,g;
 
 void getdata()
 {
  cout<<"\nenter name";
  cin>>name;
  cout<<"\nenter employee number";
  cin>>num;
  cout<<"\nenter basic salary";
  cin>>b;
 }
void compute()
{
 d=b*(52/100);
 g=b+d;
 it=g*(30/100);
 ns=g-it;
}
void display()
 {
  cout<<"\n Name:"<<name;
  cout<<"\n DA:"<<d;
  cout<<"\n Gross salary=Rs"<<g;
  cout<<"\n Income tax=Rs"<<it;
  cout<<"\nnet salary=Rs"<<ns;
  cout<<"\n";
  
  
 }
}; 
int main()
{
 int i,n;
 Employee E[6];
 cout<<"\n enter the number of employees";
 cin>>n;
 for(i=0;i<n;i++)
 {
 E[i].getdata();
 }
 for(i=0;i<n;i++)
 {
 E[i].display();
 }
}

