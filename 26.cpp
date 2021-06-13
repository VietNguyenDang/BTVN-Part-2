#include<iostream>
using namespace std;
int main()
{
    int s =0;
    int k ;
    cin>>k;
    do{
        int i ; 
        cin>>i;
        s+= i;
        k--;
    }while(k>0);
    cout<<s;
}
