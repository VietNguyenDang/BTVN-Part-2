#include<iostream>
using namespace std;



int main()
{
    int n;
    cin>>n;
    int max1,max2;
    cin>>max1;
    max2 = max1;
    for(int i =1;i<n;i++)
    {
        int k;
        cin>>k;
        if(k > max1)
        {
            max2 = max1;
            max1 = k;
        }else if(k>max2){
            max2 = k;
        }
    }
    cout<<max2;
}
