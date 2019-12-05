
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string s;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin, s);
        int count = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                count++;
            }
        }
        cout<<"Number of vowels = "<<count<<endl;

    }

}
