#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if(islower(ch))
    {
        cout<<(char)toupper(ch)<<endl;
    }
   else{
    cout<<(char)tolower(ch)<<endl;
   }
    return 0;
}
