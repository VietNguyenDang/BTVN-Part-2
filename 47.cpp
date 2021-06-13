#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int result =0;
    int k,a,b,v;
    cin>>k>>a>>b>>v;
    int so_ngan = (a%v==0) ? a/v : a/v+1;
    while(so_ngan>0)
    {
        if(b+1<k)
        {
            k=b+1;
            b=0;
        }else{
            b-=k-1;
        }
        so_ngan -=k ;
        result++; 
    }
    cout<<result;
}
