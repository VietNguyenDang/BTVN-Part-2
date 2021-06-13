#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    n/=52*7;
    int x,k;
    for(int i =1;i<=n;i++)
    {
        if(n-3*i<=100){
            k=i;
            x= n-3*k;
            break;
        }
    }
    cout<<x<<" "<<k;
}
