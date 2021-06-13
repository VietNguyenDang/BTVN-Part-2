#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
bool checkSquare(int n)
{
    return sqrt(n)==(int)sqrt(n);
}
int main()
{
    int k;
    int c=0;
    while(cin>>k){
        if(checkSquare(k)) c++;
    }
    cout<<c;
}
