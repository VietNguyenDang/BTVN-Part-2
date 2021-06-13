#include<iostream>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    if(k<=n) cout<<1+(k-1)*2;
    else cout<<2+(k-n-1)*2;
}
