#include<iostream>
using namespace std;
class check
{
 int n;
 public:
 void check1(int n)
 {
  if(n%2==0)
  cout<<n<<"is even";
  else
  cout<<n<<"is odd";
 }
};
int main()
{
 int m;
 check E;
 cout<<"\nenter the number";
 cin>>m;
 E.check1(m);
 
}
