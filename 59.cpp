#include<iostream>
using namespace std;
int main()
{
    int number = 1;
    int times = 1;
    int s = 0;
    int n;
    cin>>n;
    while(true)
    {   
        for(int i = 1;i<=times;i++)
        {
            int k =1;
            while(number*k<=s)
            {
                k++;
            }
            s = number*k;
            n--;
            if(n==0) {
                goto jump;
            }
        }
        number++;
        times+=1;
    }
jump:
        cout<<s;
}
