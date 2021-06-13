#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int s=0;
    for(int i = 1;i<=n;i++){
        int k;
        cin>>k;
        s+=k;
    }
    if(s==0){
        cout<<0;
    }else if (abs(s)<=x)
    {
        cout<<1;
    }else
    {
        cout<<abs(s)/x+1;
    }
    
}
