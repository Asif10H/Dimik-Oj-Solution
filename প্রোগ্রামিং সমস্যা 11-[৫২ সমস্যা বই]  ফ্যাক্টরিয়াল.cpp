
#include <iostream>
using namespace std;
int main()
{
    int t, n;

    cin>>t;
    while(t--)
    {
         long long int factorial = 1;
         cin >> n;
         for(int i = 1; i <=n; ++i)
         {
            factorial *= i;
         }
         cout<< factorial<<endl;
    }

    return 0;
}
