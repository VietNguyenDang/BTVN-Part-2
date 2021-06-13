#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count = 0;
    for(int a = 1;a<=n;a++)
    {
        for(int b= a;b<=n;b++)
        {
            double c = sqrt(a*a+b*b);
            if(c>n) break;
            if(int(c) == c) count++;
        }
    }
    cout<<count;
    
}
