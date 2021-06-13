#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int money ;
    cin>>money;
    while(money%4)
    {
        if(money&1)
            money += 2*money+1;
        else   
            money /=2;
    }
    cout<<money;

}
