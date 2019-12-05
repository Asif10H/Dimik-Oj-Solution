#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, l;
    char c[101];
    cin>>T;
    for(int i = 1; i <= T; i++)
    {
        cin>>c;
        l = c[strlen(c)-1];
        if(l % 2 == 0)
        {
            cout<<"even"<<endl;
        }
        else
        {
            cout<<"odd"<<endl;
        }
    }
}
