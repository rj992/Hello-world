#include<iostream>
using namespace std;
class palindrome
{
 int n,rev=0,d,x;
 
 public:
 void check(int n)
 {
  x=n;
  while(n>0)
  {
   d=n%10;
   rev=(rev*10)+d;
   n=n/10;
  }
  cout<<"\nReverse of the number is"<<rev;
  if(rev==x)
  cout<<"\n"<<x<<" is palindrome";
  else
  cout<<"\n"<<x<<" is not palindrome";
 }
};
int main()
{
 int m;
 palindrome E;
 cout<<"\nenter the number";
 cin>>m;
 E.check(m);
 
}
