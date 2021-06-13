#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int dot = 2;
    for(int i = 2;i<=n;i++ )
    {
        dot += dot-1;
    }
    cout<<dot*dot;
}
