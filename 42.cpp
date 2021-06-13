#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i =0;
    float sum = 0;
    unsigned int k;
    while(cin>>k)
    {
        sum+=k;
        i++;
    }
    cout<<fixed<<setprecision(3)<<sum/i;
}
