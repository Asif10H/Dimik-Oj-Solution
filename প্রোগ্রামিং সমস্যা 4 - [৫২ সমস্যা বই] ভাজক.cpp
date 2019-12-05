
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, N;
    cin>>T;
    for(int i = 1; i <= T; i++)
    {
        cin>>N;
        cout<<"Case "<<i<<":";
        for(int i = 1; i <= N; i++)
        {
            if(N % i == 0)
            {
                cout<<" "<<i;
            }
        }
        cout<<endl;
    }
}
