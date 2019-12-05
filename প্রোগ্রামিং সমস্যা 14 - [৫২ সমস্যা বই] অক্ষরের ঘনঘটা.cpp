
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    char s[10001];
    char c[2];
    cin>>t;
    while(t--)
    {
        scanf(" %[^\n]", s);
        scanf("%s", c);
        //cout<<s<<" "<<c<<endl;
        int count = 0;
        for(int i = 0; i < strlen(s); i++)
        {
            if(c[0] == s[i])
            {
                count++;
            }
        }
        if(count == 0)
        {
            //printf("'%c' is not present\n", c[0]);
            printf("'%c' is not present\n", c[0]);
        }
        else
        {
            //printf("Occurrence of '%c' in '%s' = %d\n", c[0], s, count);
            printf("Occurrence of '%c' in '%s' = %d\n", c[0], s, count);
        }
    }
}
