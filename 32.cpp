#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n=0;
    int k;
    while(cin>>k){
        if(!(k&1)) n++;
    }
    cout<<n;
}
