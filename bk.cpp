#include<iostream>
using namespace std;
class Bank
{
 public:
 char name[20],type[10];
 int accno,bal,amt,w;
  
 void assign()
 {
  cout<<"\nenter name";
  cin>>name;
  cout<<"\nenter acc no";
  cin>>accno;
  cout<<"\nenter acc type";
  cin>>type;
 }
 void deposit()
 {
  cout<<"\ndeposit amt";
  cin>>amt;
 }
 void withdraw()
 {
  cout<<"\nwithdrawn amt";
  cin>>w;
  if(amt>w)
  {
  cout<<"\nTransaction successful";
  bal=amt-w;
  cout<<"\n Balance is Rs"<<bal;
  }
  else
  cout<<"\n unsuccessful transaction";
 }
 void display()
 {
  cout<<"\nName:"<<name;
  cout<<"\nBalance:Rs"<<bal;
 }
}; 
int main()
{
 Bank E;
 E.assign();
 E.deposit();
 E.withdraw();
 E.display();
}

