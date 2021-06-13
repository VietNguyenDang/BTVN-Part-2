#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    if(y>x) cout<<"No";
    else{
        if(x>a) cout<<"No";
        else cout<<"YES";
    }

}
