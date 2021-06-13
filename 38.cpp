#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    double money ,interes_rate;
    unsigned int month;
    cin>>money>>interes_rate>>month;
    cout<< roundf(money*pow((1+interes_rate/100),month)*100)/100;
}
