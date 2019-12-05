
#include<bits/stdc++.h>
using namespace std;

vector<int>arr;

int main()
{
    int t, n;
    cin>>t;
    for(int i = 1; i <= t; i++)
    {
        for(int i = 0; i < 3; i++)
        {
           cin>>n;
           arr.push_back(n);
        }
        sort(arr.begin(), arr.end());
        cout<<"Case"<<" "<<i<<":";
        for(int i = 0; i < arr.size(); i++)
        {
            cout<<" "<<arr[i];
        }
        cout<<endl;
        arr.clear();

    }
}
