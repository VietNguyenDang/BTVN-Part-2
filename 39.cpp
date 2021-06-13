#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c=0;
    while(n>=5)
    {
        n/=5;
        c+= n;
    }
    cout<<c;
}
