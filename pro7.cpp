#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
   long long maxi=max({a,b,c});
   long long mini=min({a,b,c});

   cout<<mini<<" "<<maxi<<endl;

    return 0;
}
