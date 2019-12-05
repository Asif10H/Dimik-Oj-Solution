
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string s, s1;
    cin>>t;
    while(t--)
    {
        cin>>s;
        s1 = s;
        reverse(s.begin(), s.end());
        if(s == s1)
        {
            cout<<"Yes! It is Palindrome!"<<endl;
        }
        else
        {
            cout<<"Sorry! It is not Palindrome!"<<endl;
        }
    }

}
