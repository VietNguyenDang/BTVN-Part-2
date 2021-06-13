#include<iostream>
using namespace std;
int main()
{
    int x;
    int max;
    cin>>max;
    float sum=0;
    while(cin>>x)
    {
        if(x>max) max = x;
        sum+= x;
    }
    if(max<sum/2) cout<<"YES";
    else cout<<"NO";
}
