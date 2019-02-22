#include<iostream>
#include<math.h>
using namespace std;
class quadratic
{
 float root1,root2,d;
 public:
 void root(int a,int b,int c)
 {
  d=(b*b)-(4*a*c);
  if(d>0)
  {
  root1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
  root2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
  cout<<"\nRoot 1= "<<root1;
  cout<<"\nRoot 2= "<<root2;
 }
 else if(d==0)
 {
  root1=(-b)/(2*a);
  cout<<"\nroots are equal";
  cout<<"\nRoot 1= "<<root1;
}
 else
 {
  cout<<"\nreal part="<<(-b)/(2*a);
  cout<<"\nImaginary part="<<(sqrt(-d))/(2*a);
 }
 }
};
int main()
{
 int p,q,r;
 quadratic E;
 cout<<"\nenter the coefficients";
 cin>>p>>q>>r;
 E.root(p,q,r);
 
}
