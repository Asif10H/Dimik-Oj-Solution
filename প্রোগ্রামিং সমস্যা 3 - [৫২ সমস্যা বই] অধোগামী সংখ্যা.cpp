
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;
    for(int i = 1000; i >= 1; i--)
    {
        printf("%d\t", i);
        count++;
        if(count % 5 == 0)
            cout<<endl;
    }
}
