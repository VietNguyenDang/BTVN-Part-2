#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int m,n,p;
    cin>>m>>n>>p;
    cout<<min(n-m,p-n)-1<<endl<<max(n-m,p-n)-1;
}
