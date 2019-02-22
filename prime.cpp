#include<iostream>
using namespace std;
class prime
{
 int i,j,flag;
 public:
 void display(int m,int n)
 {
  
  for(i=m;i<n;i++)
  {
   flag=0;
  for(j=2;j<=i/2;j++)
  {
   if(i%j==0)
   {
   flag=1;
   break;
  }
  }
   if(flag==0)
   cout<<i<<" ";
 }
}
};
int main()
{
 int m,n;
 prime E;
 cout<<"\nenter the lower and upper limit";
 cin>>m>>n;
 E.display(m,n);
 
}
