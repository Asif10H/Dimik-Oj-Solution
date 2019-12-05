#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, n;
    cin>>T;
    for(int i = 1; i <= T; i++)
    {
        cin>>n;
        if(n % 2 == 0)
        {
            cout<<"even"<<endl;
        }
        else
        {
            cout<<"odd"<<endl;
        }
    }
}
