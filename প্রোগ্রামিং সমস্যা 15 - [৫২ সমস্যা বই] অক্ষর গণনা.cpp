
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    char s[1001];
    int countt[26];
    scanf("%d", &t);
    while(t--)
    {
        scanf(" %[^\n]", s);
        memset(countt, 0, sizeof countt);
        for(int i = 0; i < strlen(s); i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                countt[s[i]-'a']++;
            }
        }
        for(int i = 0; i < 26; i++)
        {
            if(countt[i] != 0)
            {
                 printf("%c = %d\n", 'a'+i, countt[i]);
            }
        }
      if(t  !=  0)
      {
          printf("\n");
      }
    }
}
