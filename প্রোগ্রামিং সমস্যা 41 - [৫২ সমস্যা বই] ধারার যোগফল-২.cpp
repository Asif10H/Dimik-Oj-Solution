#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long long unsigned int ull;
typedef long double ld;
typedef vector<int> vr;
typedef pair<int, int> pr;
#define pb push_back
#define ff first
#define ss second
#define INF 1999999999
#define MODA 1000000007
#define PI 3.1415926535897932384626433
#define endl "\n"
//cout << fixed << setprecision(2);

long double fac(ll n) {
    ll tmp = 1;
    for(int i = 1; i <= n; i++) {
        tmp *= i;
    }
    return tmp;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        long double ans = 0;
        for(int i = 1; i <= n; i++) {
            ans += (i / fac(i));
        }
        cout << fixed << setprecision(4);
        cout << ans << endl;
    }

    return 0;
}
