#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n ; 
    cin>>n;
    int min;
    cin>>min;
    int count = 1;
    for(int k =1 ; k<n; k++)
    {
        int i ;
        cin>>i;
        if(i==min) count++;
        if(i<min)
        {
            min = i;
            count = 1;
        }
    }
    cout<<min<<" "<<count;
}
