#include<iostream>
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;
    int last_digit_1=n%10;
    int last_digit_2=m%10;
    cout<<last_digit_1+last_digit_2<<endl;
    return 0;
}
