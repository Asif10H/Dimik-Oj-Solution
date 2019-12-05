
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    for(int i = 1; i <= t; i++)
    {
        string a, b, s; //a = vowel b = consonaants
        getline(cin,s);
        for(int i = 0; i < s.length(); i++)
        {
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            {
                if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
                        s[i] == 'o' || s[i] == 'u' || s[i] == 'A' ||
                        s[i] == 'E' || s[i] == 'I' || s[i] == 'O' ||
                        s[i] == 'U')
                {
                    a += s[i];
                }
                else
                {
                    b += s[i];
                }
            }
        }
        cout<<a<<endl<<b<<endl;
    }
}
