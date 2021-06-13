#include<iostream>
using namespace std;
int main()
{
    int k ;
    cin>>k;
    int max;
    cin>> max;
    for(int i=1 ;i<k;i++)
    {
        int new_value;
        cin>>new_value;
        if(new_value>max)  max = new_value;
    }
    cout<<max;
}
