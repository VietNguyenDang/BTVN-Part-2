#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    double A,B,C,p,q,r;
    cin>>A>>B>>C>>p>>q>>r;
    double part = min(C/r,min(A/p, B/q));
    cout<<fixed<<setprecision(6);
    cout<<A-part*p<<" ";
    cout<<B-part*q<<" ";
    cout<<C-part*r;
}
