#include<iostream>
using namespace std;
class Employee
{
 public:
 char emp_name[20];
 int emp_code;
 
 void getdata()
 {
  cout<<"\nenter name";
  cin>>emp_name;
  cout<<"\nenter employee code";
  cin>>emp_code;
  }
 void display()
 {
  cout<<"\nName:"<<emp_name;
  cout<<"\nCode:"<<emp_code;
 }
}; 
int main()
{
 int i;
 Employee E[6];
 for(i=0;i<6;i++)
 {
 E[i].getdata();
 }
 for(i=0;i<6;i++)
 {
 E[i].display();
 }
}

