#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long x=n/1000;
    if(x%2==0)
    {
        cout<<"EVEN"<<endl;
    }
    else if(x%2!=0)
    {
        cout<<"ODD"<<endl;
    }
    return 0;
}
