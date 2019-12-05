
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    char s[10001];
    cin>>t;
    while(t--)
    {
        scanf(" %[^\n]", s);
        int count = 0;
        for(int i = 0; i < strlen(s); i++)
        {
            if(s[i] == ' ')
            {
                count++;
            }
        }
        printf("Count = %d\n", count+1);
    }
}
