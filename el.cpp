#include<iostream> 
using namespace std;
class Charge
{
 public:
 
float charge,scharge; 

int compute(int no_unit)
{
 
if(no_unit<=100) 
    charge=(0.60*no_unit); 
else if(no_unit>100&&no_unit<=300) 
  { 
     charge=(100*0.60); 
     charge+=((no_unit-100)*0.80); 
   } 
else if(no_unit>=300) 
  { 
    charge=(100*0.60); 
    charge+=(200*0.80); 
    charge+=((no_unit-300)*0.90); 
  } 
if(charge<50) 
    charge=50; 
if(charge>300) 
 { 
   scharge=(0.15*charge); 
     charge+=scharge; 
 } 
return charge;
}
};
int main()
{
 int n,i,x,m;
 char name[20]; 
 Charge E;
cout<<"\n enter number of users";
cin>>n;
for(i=0;i<n;i++)
{
 cout<<"\n enter name and number of units consumed";
cin>>name; 
cin>>m; 
 
 x=E.compute(m);
cout<<"electricity bill \n"; 
cout<<name<<" :  rs"<<x; 
}

return(0); 
} 

