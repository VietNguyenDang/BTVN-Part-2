#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int g,s,k;
    cin>>g>>s>>k;
    int sum = g*493+s*29+k;
    int n ;
    cin>>n;
    for(int i =1;i<=n;i++)
    {
        int g1,s1,k1;
        cin>>g1>>s1>>k1;
        sum-=(g1*493 + s1*29 + k1);
    }
    if(s<0){
        cout<<-1;
    }else{
        cout<<sum/493<<" ";
        sum%=493;
        cout<<sum/29<<" ";
        sum%=29;
        cout<<sum;
    }
}
