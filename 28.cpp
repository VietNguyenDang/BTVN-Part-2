#include<iostream>
using namespace std;
int main()
{
    int sum = 0;
    while(true)
    {
        int i ;
        cin>>i;
        if(!i) break;
        sum+= i;
    }
    cout<<sum;
}
