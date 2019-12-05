
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, n1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        n1 = sqrt(n);
        if(n1 * n1 == n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

}
