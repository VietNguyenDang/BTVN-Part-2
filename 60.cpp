#include<iostream>
using namespace std;
int main()
{
    int m,n,p;
    cin>>m>>n>>p;
    if(m%2!=0){
        m--;
        p--;
    }
    m/=2;
    while(p>0 || m!=n)
    {
        if(m>n){
            m--;
            p-=2;
        }else if (m<n){
            n--;
            p--;
        }else{
            m--;
            n--;
            p-=3;
        }
    }
    cout<<min(m,n);
}
