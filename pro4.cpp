#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;
    double x=(double)n/m;
    cout<<"floor "<<n<<" / "<<m<<" = "<<floor(x)<<endl;
     cout<<"ceil "<<n <<" / "<< m<<" = "<<ceil(x)<<endl;
      cout<<"round "<<n <<" / " <<m<<" = "<<round(x)<<endl;
    return 0;
}
