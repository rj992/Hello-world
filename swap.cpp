#include<iostream>
using namespace std;
class Swap
{
 public:
 
 void swap_value(int a,int b)
 {
  int temp;
  temp=a;
  a=b;
  b=temp;
  cout<<"\nAfter swapping:value of a="<<a<<"\nvalue of b="<<b;
 }
 void swap_reference(int &x,int &y)
{
 int z;
 z=x;
 x=y;
 y=z;
 cout<<"\nAfter swapping:value of a="<<x<<"\nvalue of b="<<y;
}
void swap_address(int *p,int *q)
{
 int r;
 r=*p;
 *p=*q;
 *q=r;
 cout<<"\nAfter swapping:value of a="<<*p<<"\nvalue of ="<<*q;
}
}; 
int main()
{
 Swap S;
 int a,b,c;
 cout<<"\nenter two numbers";
 cin>>a>>b;
 cout<<"\n 1.CALL BY VALUE\n 2.CALL BY REFERENCE \n 3.CALL BY ADDRESS";
 cout<<"\n enter your choice";
 cin>>c;
 switch(c)
 {
  case 1:
  {
   cout<<"\nBefore swapping:value of a="<<a<<"\nvalue of b="<<b;
   S.swap_value(a,b);
   cout<<"\nAfter swapping,In main swapping:value of a="<<a<<"\nvalue of b="<<b;
   break;
  }
  case 2:
  {
   cout<<"\nBefore swapping:value of a="<<a<<"\nvalue of b="<<b;
   S.swap_reference(a,b);
   cout<<"\nAfter swapping,In main:value of a="<<a<<"\nvalue of b="<<b;
   break;
  }
 case 3: 
 { 
  cout<<"\nBefore swapping:value of a="<<a<<"\nvalue of b="<<b;
  S.swap_address(&a,&b);
  cout<<"\nAfter swapping,In main:value of a="<<a<<"\nvalue of b="<<b;
  break;
 }
default:
{
 cout<<"\nwrong choice";
}
}
}
