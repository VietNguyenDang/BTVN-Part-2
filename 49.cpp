#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    const float Area = 15625;
    float x,y;
    cin>>x>>y;
    float posx,posy;
    if(x==0)
    {
        float a = 250-y;
        posx = 2*Area/a;
        posy = 250 - posx;
    }
    else if(y==0)
    {
        float a = 250-x;
        posy = 2*Area/a;
        posx = 250 - posy;
    }
    else
    {
        if(y>=125)
        {
            posx = 250-(Area*2/y);
            posy =0;
        }
        else
        {
            posy = 250-(Area*2/x);
            posx = 0;
        }
    }
    cout<<fixed<<setprecision(2)<<posx<<" "<<posy;
}
