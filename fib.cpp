#include<iostream>
using namespace std;
class fibonacci
{
 int n,a,b,c,i;
 public:
 void display(int n)
 {
  a=0,b=1;
  cout<<a<<" "<<b;
  for(i=0;i<n;i++)
  {
   c=a+b;
   cout<<" "<<c;
   a=b;
   b=c;
  }
 }
};
int main()
{
 int m;
 fibonacci E;
 cout<<"\nenter the limit";
 cin>>m;
 E.display(m);
 
}
