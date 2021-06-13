#include<iostream>
using namespace std;
int sum(int n)
{
    int result=0;
    for(int i= 1;i<=n;i++)
    {
        result += i;
    }
    return result;
}
int main()
{
    int n,m,count=0;
    cin>>n>>m;
    for(int i = 1;i<=n;i++)
    {
        if(sum(i)%m==0)
        {
            count ++;
        }
    }   
    cout<<count;
}
