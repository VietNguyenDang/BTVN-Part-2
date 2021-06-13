#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int step = 2;
    int start,end;
    cin>>start>>end;
    if((end-start-2)&1) step += (end-start-2)/2+1;
    else  step+=(end-start-2)/2;
    cout<<step;
}
